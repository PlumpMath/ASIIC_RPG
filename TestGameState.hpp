#ifndef TEST_GAME_STATE_HPP
#define TEST_GAME_STATE_HPP

#include "headers.hpp"
#include "GameState.hpp"
#include "GameObjectX.hpp"

class TestGameState : public GameState {
protected:
  std::string test;

  GameObjectX xObject;

public:
  void handleInput(); //Handles all the input

  void update(); //Updates something every frame

  void draw(); //Draws everything to the screen

  //Default constructor
  TestGameState(Game* gameObject); // {game = gameObject;};

  //xObject accessor
  GameObjectX* getXObject() {return &xObject;};

};

#endif
