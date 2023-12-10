#include<iostream>
using namespace std;
class User{
    private:
        string name;
        int age;
        string username;
        string password;
        bool isLoggedIn = false;
    public:
        User(string name, int age, string username, string password){
            this->name = name;
            this->age = age;
            this->username = username;
            this->password = password;
        }
        void LogIn(string username , string password){
            if  (this->username == username && this->password == password){
                cout << "You are logged in" << endl;
                isLoggedIn = true;
            }
            else{
                cout << "Login unsuccessful" << endl;
            }
        }
        void Logout(){
            cout << "You have successfully logged out" << endl;
            isLoggedIn = false;
        }
           void showDetails(){
            if(isLoggedIn == true){
                cout << "Name is " << name << endl;
                cout << "Age is " << age << endl;
                cout << "Username is " << username << endl; 
       }
                else{
                    cout << "User is logged out " << endl;
                }
           }
        
};
int main(){
   
    User u1("Sohom" , 19 , "Sohom" , "Bolbona");
    u1.LogIn("Sohom" , "Bolbona");
    u1.Logout();
    u1.showDetails();
    return 0;
}