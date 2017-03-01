#include "Game.hpp"

void Game::pushState(GameState* state) {
  gameStates.push(state);
}

void Game::popState() {
  gameStates.pop();
}

void Game::changeState(GameState* state) {
  popState();
  pushState(state);
}

GameState* Game::peekState() {
  if (gameStates.empty()) return nullptr;
  else return gameStates.top();
}

void Game::gameLoop() {
  while (running) {
    std::cout << "In gameLoop" << std::endl;

    GameState* statePtr = peekState();
    if (statePtr == nullptr) {
      std::cout << "No active GameState, exiting application now" << std::endl;
      return;
    }

    peekState()->handleInput(); //Handles the input relevent to this game state

    peekState()->update(); //Updates certain aspects of the game state

    peekState()->draw(); //Draws the objects of the game state to the screen

    running = false;
  }
}

Game::Game() {

}

Game::~Game() {
  
}
