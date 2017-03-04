#include "TestGameState.hpp"

void TestGameState::handleInput() {
  while (game->getEventPtr()->full()) {

    int ch = game->getEventPtr()->getEvent();


    if (ch == KEY_F(2)) {
      printw("Key F2 pressed !");
      game->stop();
    }
  }
}

void TestGameState::update() {
  noecho();
  refresh();
}

void TestGameState::draw() {

}

TestGameState::TestGameState(Game* gameObject) {
  game = gameObject;
}
