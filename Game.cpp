#include "Game.hpp"
#include "GameObject.hpp"

void Game::updateScr() {

}

void Game::drawScr() {

}

void Game::initGame(std::string file) {
  //Init the lib
  initscr();

  //Initializesthe Map file according to the parameter passed on
  this->mapFile = file;

  //TODO: init other parts of the lib if necessary
}

void Game::addObject(GameObject* object) {
  //add the object to the vector
  objectList.push_back(object);

  //Send its position back to the object inserted in
  object->setPosVector(objectList.size() - 1);
}

void Game::cleanupGame() {
    curs_set(1);
    clear();
    //Shutdown ncurses
    endwin();
}
