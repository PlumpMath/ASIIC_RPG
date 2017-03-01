#ifndef GAME_HPP
#define GAME_HPP

#include "headers.hpp"
#include "GameState.hpp"
#include "Event.hpp"

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

  //TODO:

  //All the classes for handling states
  void pushState(GameState* state); //Pushes a state
  void popState(); //Pops a state
  void changeState(GameState* state); //Pops then pushes a state
  GameState* peekState(); //Returns a pointer to the top state

  //initGame()
  //cleanupGame(

  //Constructor
  Game();
  //Destructor
  ~Game();

};

#endif
