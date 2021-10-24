#include <iostream>
#include<string>
using namespace std;

int main() {    

    // int my_nums[] = {0,1,2,3,4,5,6,};

    // for(int i = 0; i < sizeof(my_nums) / sizeof(my_nums[0]); i++) {
    //         printf("\nASSHOLE : %d\n", my_nums[i]);
    // }
    // cout << "-------------------" << endl;
    // for (int i : my_nums) {
    //     cout << "ASSHOLE : " << my_nums[i] << endl;
    // }


        string my_string = "linux";
        char my_name[] = {'l', 'i', 'n', 'u', 'x', 0};
        
        // for(int i = 0; i < sizeof(my_name)/sizeof(my_name[0]); i++) {

            for(int i = 0; my_name[i] !=0 ; i++) {
            
            printf("%c \n", my_name[i]);

        }
        
        // for(int i = 0; my_string[i] !=0 ; i++) {
        
        //     printf("%c ", my_string[i]);

        // }
        cout << "\n--------------------------------" << endl;
        for(int i = 0; my_string[i]; i++) {
            
            printf("%c ", my_string[i]);

        }
        cout << "\n--------------------------------" << endl;
        for(char * cp = my_name; * cp ; cp++) {
            
          printf("%c ", * cp);

        }
        
        cout << "\n--------------------------------" << endl;
        for(auto i : my_name) {
            if (i != 0) cout <<"CURRENT: " << i << endl;
            
        }






    return 0; 








}