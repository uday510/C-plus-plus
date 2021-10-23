#include <iostream>
using namespace std;


int main()
{
	int integer_array[4] = { 1, 2, 3, 4 };

	for (int i = 0; i < integer_array.length; i++) {

		cout << integer_array[i] << endl;
	}
	cout << integer_array;


	return 0;
}