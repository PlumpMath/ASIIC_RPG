#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <ncurses.h>
#include "Map.hpp"

// @: what is this GameObject for?
// are these all the actors in a game
// it looks like you already have a GameObject class defined somewhere,
// you should get rid of this one
class GameObject;

// how do you plan for these two to work together

/*
  @: what does the point of the Game?
  Does it control the flow of the entire game
    - user flow through menu
    - user flow through actual gameplay
*/
class Game {
protected:
    // @: what does this game map do?
    Map* gameMap();
    // assuming this is the filepath for the map
    std::string mapFile;

    // storing the pointers of game objects in a vector, smart idea!!
    std::vector<GameObject*> objectList;
    int numObjects = 0;

public:
  /* should at least declare:
    constructor
    destructor
    copy constructor (usually required for most ADTs)

  */
  // accessor
  // storage of all the actors in the game
  std::vector<GameObject*>& getObjectList() {return objectList;}; //objectList accessor

  void updateScr(); //Updates the desired location of some objects
  // how are these objects specified?
  void drawScr(); //Displays the objects


  // possibly just integrate this into the constructor
  void initGame(std::string file); // Inits ncurses and everything needed
  // possibly integrate this into the destructor
  void cleanupGame();

  //
  void addObject(GameObject* object);
  //Numobjects accessor
  // @: getting the number of game objects in the game
  int getNumObjects() {return numObjects;};
};

#endif
