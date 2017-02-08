#include <iostream>
#include "Game.hpp"
#include "GameObjectRect.hpp"
#include <vector>

//Prototypes
void gameLoop(Game* game);

//Holds all the different function calls needed for the program to work
int main() {
  Game* game = new Game();
  game->initGame("level"); //initialize the game and all with the level

  std::cout << "Game Initialized" << std::endl;

  //Run the main game logic
  gameLoop(game);

  std::cout << "Gameloop done" << std::endl;

  //Clear everything before exiting
  game->cleanupGame();

  std::cout << "Game has correctly shut down" << std::endl;

  return 0;

}

//Holds the main loop of the game
//NOTE: Most of the program functions and all will be in the objects
void gameLoop(Game* game) {
  std::cout << "In game loop" << std::endl;

  bool isRunning = true;

  GameObjectRect* rect; //Create a rectangle

  int* rectSize = rect->size();

  int tempRectSize[2] = {5, 5}; //Default size to a square of 5 by 5
  rectSize = tempRectSize;

  rectSize = rect->size();

  std::cout << rectSize << std::endl;

  unsigned int vectorSize = game->getObjectList().size();

  //TODO: get the pointer array and print it out in order to check if it is correctly modifying the value

  while (isRunning) {
    isRunning = false;
  }

}
