#include <bits/stdc++.h>
int fact_recursion(int fact_input);
int fact_for_loop(int fact_input);
int fact_while_loop(int fact_input);
int optionFunction();
void printer();


int fact_input;
int option;
int temp = 1;

int main () {

    std::cout <<"\nPlease enter a number to find factorial: ";
    std::cin >> fact_input;

    optionFunction();

    return 0;
}
int optionFunction() {

    std::cout << "\nPLEASE CHOOSE ANY ONE FROM BELOW OPTION \n" <<std::endl;

    std::cout << "1. USING WHILE LOOP. \n"
            "2. USING FOR LOOP. \n"
            "3. USING RECURSION. \n"
         <<std::endl;

    std::cin >> option;
    std::cout << "" <<std::endl;

    if (option == 1)
        fact_while_loop(fact_input);
    else if (option == 2)
        fact_for_loop(fact_input);
    else if (option == 3)
    {
    
    printer();
    std::cout << fact_recursion(fact_input) ;
    }

    else
    {
        puts("PLEASE CHOOSE FROM ABOVE OPTIONS \n");
        optionFunction();
}
return 0;
}

// TODO using while loop
int fact_while_loop(int i) {

    std::cout << "FINAL OUTPUT: ";
    while (i >= 1)
    {
        if (i > 1)
        {
            temp = temp * i;
            std::cout << i << "*";
        }
        else
        {
            std::cout << i << " = ";
        }
        i--;
    }
    std::cout << temp <<std::endl;
    }

    // TODO using for loop

    int fact_for_loop(int a) {
        std::cout << "FINAL OUTPUT: ";
        for (int i = a; i >= 1; i--)
        {
            if ( i > 1) {
            temp = temp * i;
            std::cout << i << "*";
            }
           else {
             std::cout << i <<" = " ;
           }
        }
        std::cout << temp <<std::endl;
    }

    // TODO using recursion.

    void printer() {
        std::cout << "FINAL OUTPUT: ";
    }
    int fact_recursion(int i ) {
        
        if (i <= 1) {

            std::cout << i << " = " ;
            return i;
        }
        else 
        {
            std::cout << i << "*";
            return i * fact_recursion(i-1);
        }
    }
