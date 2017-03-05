#ifndef TEST_GAME_STATE_HPP
#define TEST_GAME_STATE_HPP

#include "headers.hpp"
#include "GameState.hpp"

class TestGameState : public GameState {
protected:
  std::string test;

public:
  void handleInput(); //Handles all the input

  void update(); //Updates something every frame

  void draw(); //Draws everything to the screen

  //Default constructor
  TestGameState(Game* gameObject); // {game = gameObject;};

};

#endif
