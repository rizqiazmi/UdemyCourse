#include <iostream>
#include <SDL.h>
#include "Screen.h"
using namespace std;
using namespace apple;

int main(int argc, char *argv[]) {

    Screen screen;

    if(screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }

    while(true) {
        // Update particles
        // Draw particles
        // check for messages/events

        if(screen.processEvents() == false) {
            break;
        }
    }

    screen.close();

    return 0;

}
