#include <iostream>

using namespace std;

int life = 3;

int lifeUp() {
    return ++life;
}
int main () {

    int life = 3;

    cout << "Your starting game life is: " << life << endl;

    life = lifeUp();

    cout << "Your updating game life is: " << life << endl;


    life = lifeUp();
    cout << "Your updating game life is: " << life << endl;



    return 0;
}