/*Create a user class with properties :id(private) , username(public) & password(private).
its id should be intialized in a parametereised constructor.
it should have a getter and setter for password*/
#include <iostream>
using namespace std;
class User{
    int id;
    string password;
    public:
    string username;
    User(int id){
        this->id = id;
    }
    void setpassword(string password){
        this->password = password;
    }
    string getpassword(){
        return password;
    }
};
int main(){
    User c1(9);
    c1.setpassword("pass@123");
    cout<<c1.getpassword()<<endl;

    return 0;
}