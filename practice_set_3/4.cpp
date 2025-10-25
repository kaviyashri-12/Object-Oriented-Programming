#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    double balance;
public:
    BankAccount(){
        accountNumber=0;
        balance=0.0;
    }
    BankAccount(int a){
        accountNumber=a;
        balance=0.0;
    }
    BankAccount(int a, float b){
        accountNumber=a;
        balance=b;
    }
    void display(){
        cout<<"account num:"<<accountNumber<<endl;
        cout<<"balance:"<<balance<<endl;

    }
};
int main(){
    BankAccount a1;
    cout<<"default"<<endl;
    a1.display();
    BankAccount a2(1234);
    cout<<"only acc number"<<endl;
    a2.display();
    BankAccount a3(4567,9000);
    cout<<"acc number and balance"<<endl;
    a3.display();
    return 0;
}