#include "TestGameState.hpp"

void TestGameState::handleInput() {
  
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
