#include <iostream>

using namespace std;


int main () {

    // int life = 3;
    // int points = 4;

    // int score = -points;

    // score += points;

    // if (life != 0)
    // {
    //     /* code */ 
    // }

    bool isSigned = true;
    bool isAdmin = true;
    bool isFbUser = true;
    bool isGoogleUser = true;
    

    if( (isFbUser || isGoogleUser) && isAdmin ) {
        puts("Welcome Admin");
    } else {
        puts("No Admin Access");
    }

    if (isGoogleUser || isFbUser) {
        outs("Welcome user")
    }

    

    return 0;
}