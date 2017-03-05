#ifndef EVENT_HPP
#define EVENT_HPP

#include "headers.hpp"

class Event {
private:
  void addInput(int ch);

  int ch; //Character input

  std::stack<int> events; //All the events
  bool running = true; //The main loop will run while this is true

  //Input fetching loop thread
  std::thread inputFetch;

public: //Methods
  void loop(); //Main loop in the thread

  void getInput(); //Pops then returns an event

  bool full(); //Checks if the stack has events in it

  int getEvent();

  //Constructor
  Event();
  //Destructor
  ~Event();

};

#endif
