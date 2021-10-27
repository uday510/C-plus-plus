#include <iostream>

using namespace std;


int main () {


    char my_string[] = "linux";

    char my_name[] = {'l', 'i', 'n', 'u', 'x', 0};

    int my_nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8,};


    // for (int *i = my_nums;  *i != 8; i++)

    // printf("%d\n", *i);

 
    printf("%s\n", my_string);
    printf("%s\n", my_name);

    cout<< "---------------------------------------" << endl;
    cout << "USING FOR LOOP " << endl ;

    for (int i = 0; my_name[i]; i++) 
    printf("CHAR IS : %c\n", my_name[i]); 


        // TODO POINTER IS SMART ENOUGH TO JUMP THROUGH THE NEXT VALUE OF AN ARRAY.

        //TODO SO * NOT REQUIRED IN CP++.

        cout << "USING CHAR POINTER" << endl;
        cout<< "---------------------------------------" << endl;

    for (char *cp = my_name; *cp; cp++) 

    printf("CHAR IS : %c\n", *cp); 

    //TODO FOR EACH LOOP.
    cout<< "---------------------------------------" << endl;
    cout<< "USING FOR EACH" << endl;
            
        for (char i: my_name) {
         if (i == 0) break;
        
                printf("CHAR IS: %c \n",i);
        }

    printf("EXIT");
    return 0; 
}