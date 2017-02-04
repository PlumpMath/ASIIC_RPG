#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>

#include <ncurses.h>

#include "Map.hpp"
#include "GameObject.hpp"

class Game {
private:
    Map* gameMap();
    std::string mapFile;
    std::vector<GameObject*> objectList;

public:
  void updateScr(); //Updates the desired location of some objects
  void drawScr(); //Displays the objects

  void initGame(std::string file); // Inits ncurses and everything needed

  void addObject(GameObject* object);

};

#endif
