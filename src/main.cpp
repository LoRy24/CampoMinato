//
// Powered with <3 by Lorenzo Rocca
// Game designed by Microsoft
//
// Educational Purposes
//

// C++ Libs
#include <iostream>
#include <unistd.h>

// Libs
#include "engine/terminal-utils.h"

// Namespace
using namespace std;

int main() {
    while (true) {
        int righe, colonne;
        obtainTerminalSizes(&righe, &colonne);
        cout << righe << endl;
        cout << colonne << endl;
        cout << endl;
        usleep(1000000);
    }
    return 0;
}
