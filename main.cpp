#include <iostream>

#include "Game.hpp"
#include "TestGameState.hpp"

int main() {
  Game game;

  game.pushState(new TestGameState(&game));

  game.gameLoop();

  //TODO: Code an event system

  return 0;

}
