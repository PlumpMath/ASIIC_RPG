#include <iostream>
#include "Game.hpp"
#include "GameObjectRect.hpp"
#include <vector>

/*
  NOTE: If you are declaring an object of a specific type that only needs to
        be created once, like game, it might be a better idea to initialize it on
        the stack using "Game game = Game();"

        Pointers give you a lot of control over your function but they can get messy and
        lead to memory and aliasing problems

        For instance, even if cleanupGame() ran correctly you still need to deallocate
        the pointer "game". Think about it this way, for all memory you allocate (new, malloc, calloc)
        you need to deallocate. If this is done without a pointer, all the allocation and
        deallocation would happen with the constructor and destructor.

        Try and also declare most of your longer-lasting variables at the top.
        This is good practice for organization and actually helps the compiler out too.

*/

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

  //TODO: Don't forget to load the map

  std::cout << "In game loop" << std::endl;

  bool isRunning = true;

  GameObjectRect* rect; //Create a rectangle

  //Default the size to a 5x5 square
  // rect->setSizeX(5);
  // rect->setSizeY(5);

  // //Read and display the size for DEBUG reasons
  // int otherrectSizeX = rect->getSizeX();
  // std::cout << "Size X : " << otherrectSizeX << std::endl;
  // int otherrectSizeY = rect->getSizeY();
  // std::cout << "Size y : " << otherrectSizeY << std::endl;
  unsigned int vectorSize = game->getObjectList().size();

  //Add the rectangle to the game
  game->addObject(rect);

  while (isRunning) {

    // can do an iterator over this: I will show you this later
    for (int i = 0; i <= game->getNumObjects(); i++) {
      //Get a pointer to the objectList vector
      std::vector<GameObject*>& vector = game->getObjectList();

      std::cout << "DEBUG" << std::endl;
      std::cout << "i = " << i << std::endl;

      //Get the object
      GameObject* currentGameObject = vector.at(i);

      //DEBUG
      std::string debug = currentGameObject->getName();
      std::cout << "Debug = " << debug << std::endl;

      //Update the objects position, size, etc
      currentGameObject->update();
      //Draw the changes to the screen
      currentGameObject->draw();
    }

    //TODO: Exit the gameloop if ESC is pressed.
    //For now it will exite after one frame

    isRunning = false;
  }

}
