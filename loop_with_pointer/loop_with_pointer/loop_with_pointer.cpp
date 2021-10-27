#include <iostream>
using namespace std;

int main() {
    

    char my_string[] = "linux";

    char my_name[] = { 'l', 'i', 'n', 'u', 'x', 0 };


    printf("%s\n", my_string);
    printf("%s\n", my_name);

    cout << "------------ " << endl;

    // for (int i = 0; my_name[i]; i++) 
    // printf("CHAR IS : %c\n", my_name[i]); 


    for (char* cp = my_name; *cp != 0; *cp++)
        printf("CHAR IS : %c\n", *cp);

    return 0;

}