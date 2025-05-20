//
// Created by Lorenzo Rocca on 19/05/25.
//

// Libs
#include "terminal-utils.h"

// Implementazione
int obtainTerminalSizes(int* widthDest, int* heightDest) {
#ifdef _WIN32
    // Ottieni le informazioni dal servizio di Windows
    CONSOLE_SCREEN_BUFFER_INFO consoleScreenBufferInfo;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleScreenBufferInfo)) {
        *widthDest = consoleScreenBufferInfo.srWindow.Right - consoleScreenBufferInfo.srWindow.Left + 1;
        *heightDest = consoleScreenBufferInfo.srWindow.Bottom - consoleScreenBufferInfo.srWindow.Top + 1;
        return 1; // Tutto OK
    }

    // Segnala l'errore
    return 0;
#else
    // Informazioni sistemi UNIX
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
