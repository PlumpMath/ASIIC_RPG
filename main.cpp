#include <iostream>

#include "Game.hpp"
#include "TestGameState.hpp"

int main() {
  Game game;

  game.pushState(new TestGameState());

  game.gameLoop();

  return 0;
}
