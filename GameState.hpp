#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

#include "headers.hpp"
#include "Game.hpp"

class GameState {
protected:
  Game* game;

public:
  //These virtual functions are put equal to 0 or else we have a typeInfo error on the game state class
  virtual void handleInput() = 0; //Handles all the input

  virtual void update() = 0; //Updates something every frame

  virtual void draw() = 0; //Draws everything to the screen

  //Default constructor
  GameState(Game* gameObject) {game = gameObject;};


};

#endif
