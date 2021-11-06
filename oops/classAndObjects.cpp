#include<bits/stdc++.h>

#define END return 0

using namespace std;

class User{

            int secret = 22;
    
    public: 
            string name = "default";

            void classMsg() { cout << "Class is great, " << name << endl; }

        // TODO Set the value. 
       
     void setSecret(const int & newsecret) {
              secret = newsecret;
     }

        // TODO Get the value. {you can use getMethod without setMethod also.}
      
      int getSecret() { 
        return secret;
      }
};

int main() {

            User linux;
            
            linux.name = "Linux";
            
            linux.classMsg();

            User linux2;
            linux2.classMsg();
            linux2.name = "Linux2";
            linux2.classMsg();

            linux.setSecret(10);
            cout << linux.getSecret() << endl;

            END;
}