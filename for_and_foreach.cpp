#include <iostream>
using namespace std;

int main () {

    
        

        int my_nums[] = {0,1,2,3,4,5,6,7};

        
        for (int i = 0; i < sizeof(my_nums) / sizeof(my_nums[0]); i++)
        printf("VALUE AT INDEX %d is: %d \n",i, my_nums[i]);

        cout << " --------------- " << endl;
        for ( int i: my_nums )
        cout << i << endl;
    return 0;

}