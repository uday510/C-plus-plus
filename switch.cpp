#include<iostream>

using namespace std;


int main() {

        int rating = 2;

        switch (rating) {
            case 1 : 
                cout<<"POOR FELLOW" << endl;
                break;
            case 2 : 
                cout << "FUCK OFF" << endl;
                break;
            case 3 : 
                cout << "RATED 3 STAR "<<endl;
            default :
                cout << "YOU DID NOTHING ASSHOLE" << endl;
        }



    return 0;
}