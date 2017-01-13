#include <ncurses.h>
#include <iostream>

int main() {

  initscr(); //Start curse mode
  printw("Hello world"); //Print hello world
  refresh(); //Print it on the real screen
  getch(); //Wait for user input
  endwin(); //End curse mode

  return 0;
}
