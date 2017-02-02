#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "Map.hpp"

class Game {
private:
    Map* gameMap();

public:
  void updateScr(); //Updates the desired location of some objects
  void drawScr(); //Displays the objects

  void initGame(std::string file); // Inits ncurses and everything needed

  void addObject();

};

#endif
