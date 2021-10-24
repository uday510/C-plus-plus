#include <iostream>
using namespace std;

int main() {


    printf("Float size - %ld bits\n", sizeof(long double) * 8);

    float my_p_value = 20.2 + 20.2;
    long double my_p_value1 = 20.2;
    long  my_p_value2 = 20.2;

    if(my_p_value == 40.400001525878906000000000000000 ) puts ("BITCH");

    printf("My precise value is: %1.30f \n", my_p_value);
    printf("My precise value is: %ld \n", my_p_value1);
    printf("My precise value is: %ld \n", my_p_value2);
    return 0;
}