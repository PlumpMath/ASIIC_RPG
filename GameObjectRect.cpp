#include "GameObjectRect.hpp"
#include <iostream>

void GameObjectRect::update() {
  //NOTE: Nothing until a good use is found to it
  return;
}

void GameObjectRect::draw() {
  //draw the rectangle at the location in the variables
  for (int i = 0; i < rectSizeY; i++) {

    for (int j = 0; j < rectSizeX; j++) {
      //Character to be printed
      //TODO: NOT HARDCODE IT
      std::string character = "X";

      //Print the character
      mvprintw(posY + i, posX + j, character.c_str());
    }

  }
}
