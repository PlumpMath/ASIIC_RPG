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

  //get the size pointers
  int rectSizeX = rect->sizeX();
  int rectSizeY = rect->sizeY();

  //Default the size to a 5x5 square
  rectSizeX = 5;
  rectSizeY = 5;

  //Read and display the size for DEBUG reasons
  rectSizeX = rect->sizeX();
  std::cout << "Size X : " << rectSizeX << std::endl;
  rectSizeY = rect->sizeY();
  std::cout << "Size y : " << rectSizeY << std::endl;

  //TODO: get the pointer array and print it out in order to check if it is correctly modifying the value

  unsigned int vectorSize = game->getObjectList().size();

  while (isRunning) {
    isRunning = false;
  }

}
