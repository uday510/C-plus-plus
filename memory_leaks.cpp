#include <iostream>
using namespace std;

int main () {

        int *myp;

        try {
            myp = new int[10];
            cout << "Memory space allocated." << endl;

        } catch(...) {
            cout << "Failed to allocate memory..." << endl;
        }

        

         delete [] myp;




    return 0;
}