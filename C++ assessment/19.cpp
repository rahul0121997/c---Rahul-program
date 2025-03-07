#include <iostream>

class BankAccount {
private:
    double balance; // Private data member to store the account balance

public:
    // Constructor to initialize the account with an initial balance
    BankAccount(double initial_balance = 0.0) : balance(initial_balance) {}

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << ". New balance: " << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrew: " << amount << ". New balance: " << balance << std::endl;
            } else {
                std::cout << "Insufficient funds." << std::endl;
            }
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    // Method to check the current balance
    double get_balance() const {
        return balance;
    }
};

int main() {
    // Creating BankAccount objects with initial balances
    BankAccount account1(1000.0); // Account with 1000 initial balance
    BankAccount account2;          // Account with default 0 initial balance

    // Display initial balances
    std::cout << "Account 1 Initial Balance: " << account1.get_balance() << std::endl;
    std::cout << "Account 2 Initial Balance: " << account2.get_balance() << std::endl;

    // Depositing money
    account1.deposit(500.0);   // Account 1 deposits 500
    account2.deposit(200.0);   // Account 2 deposits 200

    // Withdrawing money
    account1.withdraw(300.0);  // Account 1 withdraws 300
    account2.withdraw(100.0);  // Account 2 withdraws 100

    // Display final balances
    std::cout << "Account 1 Final Balance: " << account1.get_balance() << std::endl;
    std::cout << "Account 2 Final Balance: " << account2.get_balance() << std::endl;

    return 0;
}
