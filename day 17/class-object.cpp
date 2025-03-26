#include <iostream>
using namespace std;
class Student{
    string name;
    float cgpa;
public:
    void getpercentage(){
        cout << int(cgpa * 10) - 5 << "% " << endl;
    }
    // setters
    void setname(string nameval){
         name = nameval; 
    }
    void setcgpa(float cgpaval){ 
        cgpa = cgpaval;
    }
    // getters
    string getname(){ 
        return name; 
    }
    float getcgpa(){ 
        return cgpa; 
    }
};
int main(){
    // object
    Student s1;
    s1.setname("Shradha");
    s1.setcgpa(9.44);
    cout<<s1.getname()<<" : "<<s1.getcgpa()<<endl;
    return 0;
}