#include <bits/stdc++.h>
using namespace std;

void printVal(int a) {

    printf("\nInteger value is : %d", a);
}

void printVal(double a) {

    printf("\nDouble value is : %d", a);
}

void printVal(int *a) {

    printf("\nInteger value is : %p", a);
}

int main() {

    printVal(5);
    printVal(5.3);
    printVal(nullptr);

    return 0;
}