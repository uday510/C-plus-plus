#include <iostream>
using namespace std;

int main() {


    char call_api = 'g';

    try {
        cout << "Trying to use API call\n" << endl;
        cout << "Did some testing with API call\n" << endl;
        throw call_api;
        cout << "No code executes after return and throw" << endl;
    }
    catch (int x) {
        cout << "Integer exception handling" << endl;
    }
    catch (float  x) {
        cout << "Float  exception handling" << endl;
    }
    catch (...) {
        cout << "Something went wrong" << endl;
    }
    return 0;
}