#include "GameObjectX.hpp"

void GameObjectX::draw() {

}

void GameObjectX::move(int xPos, int yPos) {

  //Delete the old pos
  move(Y, X); //Make sure the cursor is on the object
  printw(" "); //Print a space so that the character seems empty
  //Print the screen
  Y = yPos;

  move(Y, X);
  printw("X");

}

//Constructor and destructor
GameObjectX::GameObjectX() {

}

GameObjectX::~GameObjectX() {

}
