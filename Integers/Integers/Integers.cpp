#include <iostream>
#include <cstdint>


using namespace std;

int main() {

	unsigned long long myName = 1234567891234567891;

	printf("VALUE:  %lld \n",myName );

	printf("Size of unsigned long long  data type is %lld bits\n",sizeof(unsigned long long ) * 8);
	printf("Size of int  data type is %d bits\n",sizeof(int) * 8);
	printf("Size of long  int  data type is %ld bits\n",sizeof(long int) * 8);

	return 0;
}