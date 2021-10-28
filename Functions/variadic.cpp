#include <bits/stdc++.h>

using namespace std;

template<typename T>
void func(T t) {

    cout << "One func " << t << endl;
}
template <typename T, typename... Args>
void func(T t, Args... args)
{
    cout << "Two func "<< t << endl;
    func(args...);
}

int main () {


    string myName = "linux";

    func(1);
    func(1, 2, 34, 4.5, 5.6, myName);
    return 0;
}