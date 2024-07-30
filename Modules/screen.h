#ifndef SCREEN_H
#define SCREEN_H

#include <ncurses.h>

class Screen {
public:
    virtual ~Screen() = default;
    virtual void display() = 0;
    virtual void handleInput(int ch) = 0;
    void draw_box(int starty, int startx, int height, int width);
};

#endif // SCREEN_H