#include <iostream>


struct User {
    const int id;
    int age;

    User: id(001), age(22) { }
    
};
int main () {

    using namespace std;

    //Stack

    int score = 100;

    //heap 

    int* heap_score = new int;
    *heap_score = 200;

    User* nike = new User(); // To Define in heap area.
    

    delete heap_score;
    delete nike;

    return 0;
}