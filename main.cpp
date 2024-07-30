#include "MACON.h"
#include <ncurses.h>


// Start the program in MACONs
int main() {
    MainScreen mainScreen;
    int ch;

    while (true) {
        mainScreen.display();
        ch = getch();
        mainScreen.handleInput(ch);
    }

    endwin();
    return 0;
}