#include <iostream>
using namespace std;

int main() {


    int call_api = 2;

    try {
        cout << "Trying to use API value" << endl;
        cout << "Did something with API value" << endl;

        if ( 2 != 3) {
        cout<< "TESTING FAILED" << endl;
        throw call_api;
        cout << "NO CODE EXECUTE AFTER RETURN AND THROW." << endl;
        }
        else cout << "OK" << endl; 
        
     } catch(...)   {
        cout << "Something went wrong" << endl;
    
    }
    

    cout << "KEEP ON MOVING WITH REST OF CODE" << endl;
    return 0;
}