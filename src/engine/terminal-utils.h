//
// Created by Lorenzo Rocca on 19/05/25.
//

#ifndef TERMINAL_UTILS_H
#define TERMINAL_UTILS_H

//
// Macros & Includes
//

#pragma region Macros and Includes

// Windows and macOS Portability
#ifdef _WIN32

// Windows' library
#include <windows.h>

#else

// Windows' library
#include <sys/ioctl.h>
#include <unistd.h>

#endif

#pragma endregion

//
// Functions
//

#pragma region Functions

/**
 * This function, based on OS, fetches the current terminal size
 *
 * @param widthDest The location where to save the obtained Width
 * @param heightDest Same as above but with the height
 * @return The state of the fetch operation
 */
int obtainTerminalSizes(int* widthDest, int* heightDest);

#pragma endregion

#endif //TERMINAL_UTILS_H
