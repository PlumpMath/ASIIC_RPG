#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <sstream>

// what is this Abstract Data Type for?
class Map {
private: //Attributes

  //Map Size
  int mapX;
  int mapY;

  std::string* map;
  std::string file;

public: //Methods
  //Initializes the map object
  int mapInit(std::string file);

  //Update the characters in the map array
  void updateMap(std::string* updatedMap); //NOTE: Will have to add arguments
  //Draws the characters stored in the map array to the screen
  void drawMap();

  //Getters and setters
  // just to iterate, you are returning the address of the value
  // so anyone who recieves this will be able to manipulate this (**be careful doing this!!**)
  int& getmapX() {return mapX;}
  int& getMapY() {return mapY;}
  std::string *getMap();

  //DEBUG
  void printMap(); //Prints out all the characters in the map

  //Constructor and destructor
  Map(std::string file);
  ~Map();

};

#endif
