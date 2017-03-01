#include "TestGameState.hpp"

void TestGameState::handleInput() {
  while (game->eventHandler.full()) {
    ch = game->eventHandler.getEvent();

    if (ch == KEY_LEFT) {
      std::cout << "Key left pressed !" << std::endl;
      running = false;
    }

  }
}

void TestGameState::update() {
  //Nothing here for this test
  std::cout << test << std::endl;
}

void TestGameState::draw() {

}
