// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int integer_array[4] = { 1, 2, 3, 4 };

	for (int i = 0; i < sizeof(integer_array) / sizeof(integer_array[0]); i++) {

		cout << integer_array[i] << endl;
	}
	cout <<"\n" << sizeof(integer_array);
	cout << "\n"<<  sizeof(integer_array[0]);


	int another_array[4];

	another_array[0] = 9;
	cout << "\n" << another_array[0] << "\n" << endl;
	cout << another_array[1] << "\n" << endl;
	cout << another_array[2] << "\n" << endl;
	cout << another_array[3] << "\n" << endl;


	return 0;
}

