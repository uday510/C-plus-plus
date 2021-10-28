#include <bits/stdc++.h>

using namespace std;

int getTwo() {
    return 2;
}

void interesting() {

    puts("I am interesting.");
}



int main () {

    int whatIGot = getTwo();

    string str = "I am interesting";

    cout << str << endl;
    void (*pointsToInteresting)() = interesting;

    printf("%d\n", whatIGot);

    pointsToInteresting();
    //        OR
    (*pointsToInteresting)();
    return 0;
}