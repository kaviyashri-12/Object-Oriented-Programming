#include <iostream>
#include <string>

class BankAccount {
private:
    
    double balance;
    std::string accountNumber;

public:
    
    BankAccount(std::string id, double initialDeposit) {
        accountNumber = id;
        // Balance is initialized, often with a check for positive amount.
        if (initialDeposit >= 0) {
            balance = initialDeposit;
        } else {
            balance = 0;
            std::cout << "Initial amount cannot be negative, intialize to zero.\n";
        }
    }

    // Deposit which is an Controlled access to change balance)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "$" << amount << " deposited successfully.\n";
        } else {
            std::cout << "Deposit failed: Amount must be positive.\n";
        }
    }

    // Withdraw which is an Controlled access with validation)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "$" << amount << " withdrawn successfully.\n";
        } else if (amount > balance) {
            std::cout << "Withdrawal failed: Insufficient funds.\n";
        } else {
            std::cout << "Withdrawal failed: Amount must be positive.\n";
        }
    }

    
    void display() const {
        std::cout << "\n Account Status \n";
        std::cout << "Account ID: " << accountNumber << "\n";
        std::cout << "Current Balance: $" << balance << "\n";
   
    }
};


int main() {
    
    
  
    BankAccount account1("CUST12345", 500.00);
    account1.display(); 
    account1.deposit(150.75);
    account1.withdraw(25.00);
    account1.display();
    account1.withdraw(1000.00); // Insufficient funds
    account1.deposit(-50.00);   // Invalid amount

    account1.display();

    return 0;
}
