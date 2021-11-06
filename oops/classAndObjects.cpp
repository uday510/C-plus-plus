#include<bits/stdc++.h>

#define END return 0

using namespace std;

class User{

            int _secret = 22;
    
    public: 
            string name = "default";

            void classMsg();

        // TODO Set the value. 
       
     void setSecret(const int & newsecret) {
              _secret = newsecret;
     }

        // TODO Get the value. {you can use getMethod without setMethod also.}
      
      int getSecret() const;
};

  void User::classMsg() {
  cout << "Class is great, " << name << endl;
}

  int User::getSecret() const {
  return _secret;
}

int main() {

    User linux;                    
    linux.name = "Linux";                    
    linux.classMsg();        

    User linux2;        
    linux2.classMsg();        
    linux2.name = "Linux2";        
    linux2.classMsg();        

    linux.setSecret(10);        
    cout << linux.getSecret() << endl        ;

    const User rock;        
    cout << rock.getSecret() << endl;        
    END;        
}