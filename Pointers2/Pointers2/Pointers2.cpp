#include <iostream>
using namespace std;

int main() {

	int score = 200;
	int* myp = &score;

	printf("Value of score is: %d \n", score);
	printf("Address of score is: %p \n", &score);
	printf("Address of score is: %p \n", myp);
	printf("Value of score is: %d \n", *myp);
	printf("Address of myp is: %p \n", &myp);
	
	int &another_score = score;

	another_score = 800;

	printf("ANOTHER SCORE: %d \n", another_score);
	printf("SCORE: %d", score);

		
	return 0;
}