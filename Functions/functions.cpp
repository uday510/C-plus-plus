//Funtion definition:
//
//what_I_will_give_back Function_name(what_you_have_to_give_me) {
//
//	what i will do.
//
//  return 0;
//
//nothing execute after return
//}

#include <iostream>
#include "adder.h"

using namespace std;

// Call by value

//void lifeUp(int *life) {
//
//	++(*life);
//}

// Call by Reference



int main()
{

    int life = 3;

    lifeUp(life);

    cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addMe(v3, v4) << endl;

    return 0;
}