#include<iostream>
#include "main2.h"

using namespace std;




int main() {


	int life;

	life = 4;

	int card;
	card = 40;
	int my_card = card;

	int *myp; 

	myp = &card; // pointer reference.

	my_card = *myp;  //pointer dereference.
		 

	printf("\n Value of card is: %d", *myp);
	printf("\n Value of card is: %p", myp);
	printf("\n Value of card is: %d", my_card);

	return 0;
}

