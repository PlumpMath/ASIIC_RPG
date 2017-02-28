#ifndef TEST_GAME_STATE_HPP
#define TEST_GAME_STATE_HPP

#include "headers.hpp"
#include "GameState.hpp"

class TestGameState : public GameState {
protected:
  std::string test = "Hello World";

public:
  void handleInput(); //Handles all the input

  void update(); //Updates something every frame

  void draw(); //Draws everything to the screen

};

#endif
