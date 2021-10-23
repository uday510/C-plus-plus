#include <iostream>
using namespace std;


int main()
{
    int rating = 5;

    if (rating == 5)  puts("5 star rating");

    else if (rating == 4) puts("4 star rated");

    else puts("Not 5 star rating");

    if (1) puts("HEllo WOrld"); 


    printf("Your rating feedback is %d %s \n ",rating, rating  > 5 ? "\nAWESOME ": "\nWE WILL WORK ON IT");

    return 0;
}

