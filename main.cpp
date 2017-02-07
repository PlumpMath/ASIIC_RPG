#include <iostream>
#include "Game.hpp"
#include "GameObjectRect.hpp"

//Prototypes
void gameLoop(Game* game);

//Holds all the different function calls needed for the program to work
int main() {
  Game* game = new Game();
  game->initGame("level"); //initialize the game and all with the level

  //Run the main game logic
  gameLoop(game);

  //Clear everything before exiting
  cleanupGame();

  return 0;

}

//Holds the main loop of the game
//NOTE: Most of the program functions and all will be in the objects
void gameLoop(Game* game) {
  bool isRunning = true;

  GameObjectRect* rect; //Create a rectangle

  int* rectSize = rect->size();
  rectSize[0] = 5; //Set X
  rectSize[1] = 5; //Set Y

  //TODO: get the vector size;


  while (isRunning) {

  }

}
