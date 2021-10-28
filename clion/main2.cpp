#include <iostream>

using namespace std;

enum MsOffice: uint8_t {

    BOLD = 5,
    ITALICS,
    UNDERLINE,
    CROSSED
};

int main () {

    int myAttributes = ITALICS;

    cout << myAttributes << endl;


    return 0;
}
