#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int color = 0x123456;

    unsigned char red = (color & 0xFF0000) >> 16;
    unsigned char green = (color & 0x00FF00) >> 8;
    unsigned char blue = (color & 0x0000FF);

//    color: 10001011110111101111011
//    mask: 111111110000000000000000
//    result:10001010000000000000000

    cout << hex << (int)red << endl;
//    cout << hex << green << endl;
//    cout << hex << (int)blue << endl;

    // or do the following (works for me at least!)
    unsigned char redAgain = color >> 16;
    cout << hex << (int)redAgain << endl;

    // Bitwise or: |

   return 0;
}
