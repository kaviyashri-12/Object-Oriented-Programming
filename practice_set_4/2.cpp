#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double b) {
        if (b >= 0) {
            balance = b;
        } else {
            cout << "Invalid balance! Cannot be negative." << endl;
            balance = 0;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(1000);
    cout << "Balance: " << acc.getBalance() << endl;

    acc.setBalance(-500); // Invalid
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}


