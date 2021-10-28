#include <iostream>

using namespace std;


struct User{
    const int uID;
    const char *name;
    const char *email; //here const is for pointer and not for its value.
    int course_count;
};

int main () {


        User user1 = {001, "user1", "user1@email.com", 004 };
        User user2 = {001, "user2", "user2@email.com", 005 };

        User *u = &user2;

        u->course_count = 1;
        



        cout << user1.email << endl;
        cout << user1.name << endl;
        cout << user1.course_count << endl;
        
        cout<<"----------------" << endl;
        cout << user2.email << endl;
        cout << user2.name << endl;
        cout << user2.course_count << endl;

        user2.course_count = 6;

        user2.email = "user3@email.com";
        cout << user2.email << endl;

        

        

        

    return 0;
}