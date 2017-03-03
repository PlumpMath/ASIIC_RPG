#ifndef GAME_HPP
#define GAME_HPP

#include "headers.hpp"
#include "GameState.hpp"
#include "Event.hpp"

class GameState; //Forword declaration of Game state to avoid compilation errors
//To see compilation error, go to commit #25

class Game {
private: //Attributes
  //TODO:
  //GameMap
  //mapFile
  std::stack<GameState*> gameStates;
  bool running = true;

  Event eventHandler;

public: //Methods
  void gameLoop(); //Main loop of the program

  //All the classes for handling states
  void pushState(GameState* state); //Pushes a state
  void popState(); //Pops a state
  void changeState(GameState* state); //Pops then pushes a state
  GameState* peekState(); //Returns a pointer to the top state

  //Returns a pointer to the event object
  Event* getEventPtr();

  //initGame()
  //cleanupGame(

  //Sets running to false
  void stop();

  //Constructor
  Game();
  //Destructor
  ~Game();

};

#endif
