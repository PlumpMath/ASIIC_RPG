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

  //Default the size to a 5x5 square
  rect->setSizeX(5);
  rect->setSizeY(5);

  // //Read and display the size for DEBUG reasons
  // int otherrectSizeX = rect->getSizeX();
  // std::cout << "Size X : " << otherrectSizeX << std::endl;
  // int otherrectSizeY = rect->getSizeY();
  // std::cout << "Size y : " << otherrectSizeY << std::endl;
  unsigned int vectorSize = game->getObjectList().size();

  //Add the rectangle to the game
  game->addObject(rect);

  while (isRunning) {

    for (int i = 0; i <= game->getNumObjects(); i++) {
      //Get a pointer to the objectList vector
      std::vector<GameObject*>& vector = game->getObjectList();

      //Update the objects position, size, etc
      vector[i]->update();
      //Draw the changes to the screen
      vector[i]->draw();

    }

    //TODO: Exit the gameloop if ESC is pressed.
    //For now it will exite after one frame

    isRunning = false;
  }

}
