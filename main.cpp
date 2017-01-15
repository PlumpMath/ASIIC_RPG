#include <ncurses.h>
#include <iostream>

//Prototypes
void rpgInit();
void rpgCleanup();
void writeChar(int posX, int posY);

int main() {

  rpgInit(); // Call the init function
  cbreak(); //Stop th eline buffering, everything comes to me :)
  keypad(stdscr, TRUE); //Enable F1

  int currentX = 0;
  int currentY = 0;

  int targetX = 0;
  int targetY = 0;

  int ch;

  const char space[1] = {' '}; //Soace string

  while ((ch = getch()) != KEY_F(1)) {
    switch(ch) {
      case KEY_LEFT:
        targetX--;

        move(currentY, currentX);
        printw(space);

        currentX = targetX;
        currentY = targetY;

        writeChar(currentX, currentY);

        break;

      case KEY_RIGHT:
        targetX++;

        move(currentY, currentX);
        printw(space);

        currentX = targetX;
        currentY = targetY;

        writeChar(currentX, currentY);

        break;

      case KEY_UP:
        targetY--;

        move(currentY, currentX);
        printw(space);

        currentX = targetX;
        currentY = targetY;

        writeChar(currentX, currentY);

        break;

      case KEY_DOWN:
        targetY++;

        move(currentY, currentX);
        printw(space);

        currentX = targetX;
        currentY = targetY;

        writeChar(currentX, currentY);

        break;

    }
  }

  rpgCleanup();

  return 0;
}

void rpgInit() {
  initscr(); //Init the lib

  //NOTE: Not working because of the missing window pointer, to fix later :)
  //keypad(window, true); //Initializes the arrows, F1, F2 etc...

}

void rpgCleanup() {
  curs_set(1);
  clear();
  //Shutdown ncurses
  endwin();
}


void writeChar(int posX, int posY) {
  move(posY, posX); //Move the cursor
  char x[1] = {'X'};
  printw(x); //Print the character
}

//GOOD REFERENCES:
/*
printw(string);         Print on stdscr at present cursor position
mvprintw(y, x, string);  Move to (y, x) then print string
wprintw(win, string);   Print on window win at present cursor position
                            in the window
mvwprintw(win, y, x, string);    Move to (y, x) relative to window
                                     co-ordinates and then print

Tutorial : http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/index.html
*/
