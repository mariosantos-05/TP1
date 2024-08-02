#include <ncurses.h>
#include <screen.h>


void Screen::draw_box(int starty, int startx, int height, int width) {

    mvhline(starty, startx, 0, width);
    mvhline(starty + height, startx, 0, width);
    mvvline(starty, startx, 0, height);
    mvvline(starty, startx + width, 0, height);
    mvaddch(starty, startx, ACS_ULCORNER);
    mvaddch(starty, startx + width, ACS_URCORNER);
    mvaddch(starty + height, startx, ACS_LLCORNER);
    mvaddch(starty + height, startx + width, ACS_LRCORNER);
    
}