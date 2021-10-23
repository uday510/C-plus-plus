#include <iostream>

using namespace std;

int main() {

    int my_numbers[] = {1, 2, 3, 4, 5, 6, 7};

    int i = 0;

    // while (i < 7) {

    //     if ( i == 4) {
    //         i++;
    //         continue;
    //     }
    //     cout << "CURRENT NUMBER IS : "<< my_numbers[i] <<endl;
    //     i++;

    // }

    do
    {
        cout << "CURRENT NUMBER IS : "<< my_numbers[i] <<endl;
        i++;
    } while (i < 7);
    

    
    return 0;
}