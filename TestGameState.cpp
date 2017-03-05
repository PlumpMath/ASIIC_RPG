#include "TestGameState.hpp"

void TestGameState::handleInput() {
  int ch = getch();
  char const* converted = std::to_string(ch).c_str();

  if (ch == KEY_LEFT) {
    game->stop();
  }

  printw(converted);
}

void TestGameState::update() {
  noecho();
  refresh();
}

void TestGameState::draw() {

}

TestGameState::TestGameState(Game* gameObject) {
  test = "Hello world";
  game = gameObject;
}
