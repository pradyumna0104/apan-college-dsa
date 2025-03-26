// Create a class BankAccount with private attributes accountNumber and 
// balance. Implement public methods deposit(), withdraw(), and getBalance() to 
// manage the account. 

#include <iostream>
using namespace std;
class BankAccount{
    int accno, bal;
    public:
    BankAccount(int accno,int bal){
        this->accno = accno;
        this->bal = bal;
    }
    void getBalance(){
        cout<<"account no = "<<accno <<",balance = "<<bal<<endl;
    }
    void deposit(int accno,int cash){
        if(this->accno == accno){
            bal += cash;
            cout<<"deposit successfully.\n";
        }else{
            cout<<"Wrong account no.\n";
        }
    }
    void withdraw(int accno,int amount){
        if(this->accno == accno){
            if(amount < this->bal){
                bal -= amount;
                cout<<"withdraw successfully.\n";
            }else{
                cout<<"Insufficient balance \n";
            }
        }else{
            cout<<"Wrong Account no. \n";
        }
    }
};
int main(){
    BankAccount c1(123,150);
    c1.getBalance();        //account no = 123,balance = 150
    c1.deposit(123,100);    //deposit successfully.
    c1.getBalance();        //account no = 123,balance = 250
    c1.deposit(124,100);    //Wrong account no.
    c1.getBalance();        //account no = 123,balance = 250
    c1.withdraw(123,100);   //withdraw successfully.
    c1.getBalance();        //account no = 123,balance = 150
    c1.withdraw(123,500);   //Insufficient balance
    c1.getBalance();        //account no = 123,balance = 150
    c1.withdraw(124,100);   //withdraw successfully.
    c1.getBalance();        //account no = 124,balance = 50
    return 0;
}