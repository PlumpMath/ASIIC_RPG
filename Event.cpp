#include "Event.hpp"

#include "headers.hpp"

//Push input to the stack
void Event::addInput(int ch) {
  events.push(ch);
}

//Main function executed by the thread
void Event::loop() {
  while (running) {
    //Fill ch with input
    getInput();

    //Push the input to the stack
    if (ch != -1) addInput(ch);

    //Reset ch
    ch = -1;
  }
}

int Event::getInput() {
  ch = getch();
}

bool Event::full() {
  if(events.size() <= 0) return false;
  else return true;
}

Event::Event() {
  //std::cout << "Initializing input manager..." << std::endl;

  //NOTE: Here we use a function pointer to loop
  //It compiles, so it shouldn't cause any problem
  //Lots of testing will be needed
  inputFetch = std::thread(&Event::loop, this);

}

Event::~Event() {
  //std::cout << "Exiting the input manager" << std::endl;

  running = false;
  inputFetch.join(); //Wait for the thread to finish before exiting
}

int Event::getEvent() {
  int value = events.top();
  events.pop();

  return value;
}
