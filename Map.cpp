#include "Map.hpp"

int Map::mapInit(std::string file) {
  std::ifstream level; //Create the object and open file
  const char *fileName = file.c_str();

  level.open(fileName);

  //Size of the map array
  int mapX;
  int mapY;

  //Input variable
  std::string input;

  //Construct the map array using the specified Size
  getline(level, input);
  std::istringstream ( input ) >> mapX;

  getline(level, input);
  std::istringstream ( input ) >> mapY;

  map[][] = new map[mapY][mapX];

  for (int i = 0; i <= mapY - 1; i++) {
    std::cout << "In getline loop" << std::endl;
    getline(level, input); //Get the line

    //Process it and put it in the level array
    for (int j = 0; j <= mapX - 1; j++) {
      std::cout << "Adding input to map : " << i << " " << j << std::endl;
      map[i][j] = input[j];
      std::cout << "Input : " << input[j] << std::endl;
      std::cout << "Input added" << std::endl;
    }
  }

}

void Map::updateMap() {

}

void Map::drawMap() {

}

void Map::printMap() {

}

Map::Map(std::string file) {
  //set the file string
  this.file = file;

  //Initialize the map size variables
  std::string input;

  std::ifstream level;
  const char *fileName = file.c_str();

  level.open(fileName);

  //Construct the map array using the specified Size
  getline(level, input);
  std::istringstream ( input ) >> this.mapX;

  getline(level, input);
  std::istringstream ( input ) >> this.mapY;
}

Map::~Map() {

}

int *mapSize() {
  int *size = {mapX, mapY};

  return size;
}
