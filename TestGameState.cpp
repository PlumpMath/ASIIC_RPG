#include "TestGameState.hpp"

void TestGameState::handleInput() {
  // int ch = getch();
  // char const* converted = std::to_string(ch).c_str();
  //
  // if (ch == KEY_LEFT) {
  //   game->stop();
  // }
  //
  // printw(converted);

  int ch;
  ch = getch();

  //Get xObject position
  int xObjectX = getXObject()->getPosX();
  int xObjectY = getXObject()->getPosY();

  GameObjectX* xObjectPtr = getXObject();


    printw("TEST\n");
    printw(xObjectX);
    ch = getch();

  switch (ch) {
    case KEY_LEFT:
      getXObject()->move(xObjectY, xObjectX--);
      break;

    case KEY_RIGHT:
      getXObject()->move(xObjectY, xObjectX++);
      break;

    case KEY_UP:
      getXObject()->move(xObjectY++, xObjectX);
      break;

    case KEY_DOWN:
      getXObject()->move(xObjectY--, xObjectX);
      break;

    case KEY_BACKSPACE:
      game->stop();
      break;
  }

}

void TestGameState::update() {
  refresh();
}

void TestGameState::draw() {

}

TestGameState::TestGameState(Game* gameObject) {
  test = "Hello world";
  game = gameObject;
}
