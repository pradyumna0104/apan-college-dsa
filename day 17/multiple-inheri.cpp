#include <iostream>
using namespace std;
class teacher{
    public:
    int salary;
    string subject;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class ta : public student, public teacher{
    public:
    string name;
};
int main(){
    ta ta1;
    ta1.name = "Shumit Panda.";
    ta1.rollno = 123;
    ta1.cgpa = 9.44;
    ta1.salary = 15000;
    ta1.subject = "Math";
    cout<<ta1.name<<endl;
    cout<<ta1.rollno<<endl;
    cout<<ta1.cgpa<<endl;
    cout<<ta1.salary<<endl;
    cout<<ta1.subject<<endl;

    return 0;  
}