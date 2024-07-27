#ifndef SCREEN_H
#define SCREEN_H

#include <ncurses.h>

class Screen {
public:
    virtual ~Screen() = default;
    virtual void display() = 0;
    virtual void handleInput(int ch) = 0;
};

#endif // SCREEN_H