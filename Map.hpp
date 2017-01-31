#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <sstream>

class Map {
private: //Attributes

  //Map Size
  int mapX;
  int mapY;

  std::string map[mapY-1][mapX-1];
  std::string file;

public: //Methods
  //Initializes the map object
  int mapInit(std::string file);

  //Update the characters in the map array
  void updateMap(std::string updatedMap[mapY-1][mapX-1]); //NOTE: Will have to add arguments
  //Draws the characters stored in the map array to the screen
  void drawMap();

  //Getters and setters
  int *mapSize();
  std::string[mapY-1][mapX-1] *getMap();

  //DEBUG
  void printMap(); //Prints out all the characters in the map

  //Constructor and destructor
  Map();
  ~Map();

};

#endif
