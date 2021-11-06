#include<iostream>
#include<string>
#define END return 0

using namespace std;

class Phone{
    string _name = "samsung";
    string _os = "Android";
    int _price = 0;

    // Phone(); //default constructor

public:
    Phone();                                                        //default constructor
    Phone(const string &name, const string  &os, const int &price); // parameter constructor.
    Phone(const Phone &); // copy constructor.
    string getName() {
        printf("Value of getName is %p\n", this);
        return _os;
    }
    string getOS() { return _os; }
    int getPrice();
    ~Phone(); // destructor.

};


Phone::Phone() : _name(), _os("Andy"), _price() {
    puts("Default Constructor");
}

Phone::Phone(const string &name, const string  &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("Parameter Constructor");
}

Phone::Phone(const Phone & values) {
        puts("OVERWRITE COPY CONSTRUCTOR");
        _name = "new-"+values._name;
        _os = "skinned-"+values._os;
        _price = values._price;
}
Phone::~Phone() {
    printf("Destructor called for %s\n", _name.c_str());
}
int Phone::getPrice() {
    printf("Value of getPrice is %p\n", this);
    return _price;
}

int main() { 
    Phone samsungA1;
    cout << samsungA1.getOS() << endl;

    Phone OnePlus8("oneplus", "oxygen OS", 39999);
    cout << "OnePlus8: " << OnePlus8.getName() << endl;
    

    printf("Value of object is %p\n", &OnePlus8);
    cout << "OnePlus8: " << OnePlus8.getPrice() << endl;

    Phone OnePlus8S = OnePlus8;
    // printf("Value of object is %p\n", &OnePlu8S);
    cout << "OnePlus8S: " << OnePlus8S.getName() << endl;

    END;
}


