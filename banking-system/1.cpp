#include<iostream>
using namespace std;

class bankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void value(int accountNumber, string accountHolderName, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            cout << balance << " + " << amount << " = ";
            balance += amount;
            cout << balance << endl;
        } 
        else {
            cout << "Please don't enter 0!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            cout << balance << " - " << amount << " = ";
            balance -= amount;
            cout << balance << endl;
        } 
        else {
            cout << "Check Bouns!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
    double getBalance() {
        return balance;
    }
    void displayAccountInfo() {
        cout << "Account number: " << this->accountNumber << endl;
        cout << "Account holder name: " << this->accountHolderName << endl;
        cout << "Account balance: " << this->balance << endl;
        cout << "----------------------------------------------" << endl;
    }
};

class savingAccount : public bankAccount {
protected:
    double interestRate;

public:
    void calculateInterest(double interestRate) {
        this->interestRate = interestRate;
        double interest = (getBalance() * interestRate) / 100;
        cout << "Saving account interest: " << interest << endl;
        cout << getBalance() << " + " << interest << " = " << getBalance() + interest << endl;
        cout << "----------------------------------------------" << endl;
    }
};

class checkingAccount : public bankAccount {
protected:
    double overdraftLimit;

public:
    void checkOverdraft(double withdrawalAmount, double overdraftLimit) {
        this->overdraftLimit = overdraftLimit;
        if (withdrawalAmount <= getBalance() + overdraftLimit) { 
            double calculate = withdrawalAmount - (getBalance() + (getBalance() * 5) / 100); 
            cout << withdrawalAmount << " - " << (getBalance() + (getBalance() * 5) / 100) << " = " << calculate << endl;
        }
        else {
            cout << "!!The Withdrawal amount exceeds the overdraft limit!!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
};

class fixedDepositAccount : public bankAccount {
protected:
    int term;

public:
    void calculateInterest(double interestRate, double amount) {
        if (amount <= getBalance()) {
            cout << "Enter F.D. duration in months: ";
            cin >> term;

            double interest = (amount * interestRate * term) / 100;
            cout << "F.D. interest: " << interest << endl;
            cout << amount << " + " << interest << " = " << amount + interest << endl;
        } 
        else {
            cout << "!!The F.D. amount exceeds the bank balance!!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
};
int main() {
    cout << endl << "----------Banking System----------" << endl;

    int accountNumber, option, term;
    string accountHolderName;
    double balance, amount, withdrawalAmount, overdraftLimit;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter account holder name: ";
    cin >> accountHolderName;

    cout << "Enter account balance: ";
    cin >> balance;
    cout << "----------------------------------------------" << endl;

    savingAccount account;
    account.value(accountNumber, accountHolderName, balance);
    
    checkingAccount check;
    
    fixedDepositAccount fd;

    do {
        cout << "------ O P T I O N ------" << endl << endl;
        cout << "1. Deposit amount" << endl;
        cout << "2. Withdraw amount" << endl;
        cout << "3. Display Account Information" << endl;
        cout << "4. Saving account Interest" << endl;
        cout << "5. Check Overdraft" << endl;
        cout << "6. Fixed Deposit Interest" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your option: ";
        cin >> option;
        cout << "----------------------------------------------" << endl;

        switch (option) {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter withdraw amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayAccountInfo();
            break;
        case 4:
            account.calculateInterest(5); 
            break;
        case 5: 
            check.value(accountNumber, accountHolderName, account.getBalance());

            cout << "Enter overdraft limit: ";
            cin >> overdraftLimit;

            cout << "Enter withdrawal amount: ";
            cin >> withdrawalAmount;

            check.checkOverdraft(withdrawalAmount, overdraftLimit);
            break;
        case 6: 
            fd.value(accountNumber, accountHolderName, account.getBalance());

            cout << "Enter F.D. amount: ";
            cin >> amount;
            
            fd.calculateInterest(7, amount); 
            break;
        case 0:
            cout << "Thank you..." << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (option != 0);
}