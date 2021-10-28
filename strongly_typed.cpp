#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


string api_call() {

    return "got some data from web. \n";
}
int another_api_call () {

    return 10;
}
int main () {

    auto response = api_call();
    auto rep = another_api_call();

    cout << "API CALL VALUE: " << response << endl;
    cout << "ANOTHER API CALL VALUE: " << rep << endl;

    if ( typeid(response) == typeid(string) )
    {
        puts("BOTH ID MATCHES");
    }

    if ( typeid(rep) == typeid(int) )
    {
        puts("BOTH ID MATCHES");
    }
    

    return 0;
}
