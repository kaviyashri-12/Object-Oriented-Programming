#include<iostream>
using namespace std;
class Account{
private:
    int AccountNumber;
    double balance;
public:
    void setAccountNumber(int acc){
        AccountNumber=acc;
    }
    void setbalance(double b){
        balance=b;
    }
    int getAccountNumber(){
        return AccountNumber;
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    Account a;
    a.setAccountNumber(12345);
    a.setbalance(2500);
    cout << "Account Number: " << a.getAccountNumber() << endl;
    cout << "Balance: " << a.getbalance() << endl;

    return 0;
}