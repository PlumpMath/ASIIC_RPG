#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>

#include <ncurses.h>

#include "Map.hpp"

class GameObject;

class Game {
protected:
    Map* gameMap();
    std::string mapFile;

    std::vector<GameObject*> objectList;
    int numObjects = objectList.size();

public:
  std::vector<GameObject*>& getObjectList() {return objectList;}; //objectList accessor

  void updateScr(); //Updates the desired location of some objects
  void drawScr(); //Displays the objects

  void initGame(std::string file); // Inits ncurses and everything needed
  void cleanupGame();

  void addObject(GameObject* object);

  //Numobjects accessor
  int getNumObjects() {return numObjects;};


};

#endif
