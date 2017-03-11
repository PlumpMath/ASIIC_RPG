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

    GameState* statePtr = peekState();
    if (statePtr == nullptr) {
      // std::cout << "No active GameState, exiting application now" << std::endl;
      return;
    }
    peekState()->handleInput(); //Handles the input relevent to this game state

    peekState()->update(); //Updates certain aspects of the game state

    peekState()->draw(); //Draws the objects of the game state to the screen

  }
}

void Game::stop() {
  // std::cout << "Shutting down game" << std::endl;
  printw("Shutting down");
  running = false;
}

Game::Game() {
  running = true;

  initscr(); // Start curse mode
  raw(); // Line buffering disabled
  keypad(stdscr, TRUE); //Get F1, F2 etc...
  noecho(); // Don't echo() while we do getch()

  system("setterm -cursor off"); //Gets rid of the white cursor

}

Game::~Game() {
  system("setterm -cursor on"); //Turn the cursor back on

  endwin(); //Shut down curses mode
}
