#include <iostream>
using namespace std;

int main() {


    printf("Float size long --> %ld bits\n", sizeof(long) * 8);
    printf("Float size long double --> %ld bits\n", sizeof(long) * 8);

    float my_p_value = 20.2 + 20.2;
    long double my_p_value1 = 20.2;
    long  my_p_value2 = 20.2;

    if(my_p_value == 40.400001525878906000000000000000 ) puts ("VALUE OF 20.2 + 20.2 IS NOT 40.4");

    printf("My precise value is: %1.30f \n", my_p_value);
    printf("My precise value is: %ld \n", my_p_value1);
    printf("My precise value is: %ld \n", my_p_value2);
    return 0;
}