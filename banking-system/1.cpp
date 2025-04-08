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
            cout << "please don't enter 0!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
    void withdraw(double amount) {
        if (amount < balance) {  
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
        cout << "account number: " << this->accountNumber << endl;
        cout << "account holder name: " << this->accountHolderName << endl;
        cout << "account balance: " << this->balance << endl;
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
        cout << "saving account interest: " << interest << endl;
        cout << getBalance() << " + " << interest << " = " << getBalance() + interest;
        cout << endl << "----------------------------------------------" << endl;
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
    void calculateInterest(double interestRate,double amount) {
        if (amount <= getBalance()) {
            cout << "Enter F.D. duration in month: ";
            cin >> term;

            double interest = (amount * interestRate * term) / 100;
            cout << "F.D. interest: " << interest << endl;
            cout << amount << " + " << interest << " = " << amount + interest;
        }
        else {
            cout << "!!The F.D. amount exceeds the bank balance amount!!" << endl;
        }
    }
};
int main() {
    cout << endl << "----------Banking System----------" << endl << endl;

    int accountNumber,term;
    string accountHolderName;
    double balance,amount,withdrawalAmount,overdraftLimit;

    cout << "enter account number: ";
    cin >> accountNumber;
    
    cout << "enter account holder name: ";
    cin >> accountHolderName;
    
    cout << "enter account balance: ";
    cin >> balance;

    cout << "----------------------------------------------" << endl;

    savingAccount obj1;
    obj1.value(accountNumber,accountHolderName,balance);

    cout << "enter deposit amount: ";
    cin >> amount;
    obj1.deposit(amount);

    cout << "enter withdraw amount: ";
    cin >> amount;
    obj1.withdraw(amount);

    obj1.getBalance();
    
    obj1.displayAccountInfo();

    obj1.calculateInterest(5);

    checkingAccount obj2;
    obj2.value(accountNumber,accountHolderName,obj1.getBalance());
    
    cout << "Enter overdraft limit: ";
    cin >> overdraftLimit;

    cout << "Enter withdrawl amount: ";
    cin >> withdrawalAmount;
    obj2.checkOverdraft(withdrawalAmount,overdraftLimit);

    fixedDepositAccount obj3;
    obj3.value(accountNumber,accountHolderName,obj1.getBalance());

    cout << "Enter F.D. amount: ";
    cin >> amount;
    obj3.calculateInterest(7,amount);
}