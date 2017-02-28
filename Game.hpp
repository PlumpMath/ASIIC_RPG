#ifndef GAME_HPP
#define GAME_HPP

#include "headers.hpp"
#include "GameState.hpp"

class Game {
private: //Attributes
//TODO:
//GameMap
//mapFile
std::stack<GameState*> gameStates;
bool running = true;

public: //Methods
  void gameLoop(); //Main loop of the program

  //TODO:
  void pushState(GameState* state); //Pushes a state
  void popState(); //Pops a state
  void changeState(GameState* state); //Pops then pushes a state
  GameState* peekState(); //Returns a pointer to the top state
  //initGame()
  //cleanupGame()

};

#endif
