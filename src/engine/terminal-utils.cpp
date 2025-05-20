//
// Created by Lorenzo Rocca on 19/05/25.
//

// Libs
#include "terminal-utils.h"

// Implementazione
int obtainTerminalSizes(int* widthDest, int* heightDest) {
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
#else
    winsize winSize{};
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &winSize) == 0) {
        *widthDest = winSize.ws_row;
        *heightDest = winSize.ws_col;
        return 1;
    }

    // Error
    return 0;
#endif
}
