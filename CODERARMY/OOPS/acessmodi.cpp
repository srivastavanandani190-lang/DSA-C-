#include<iostream>
using namespace std;
class BankAccount {
private:
    // HIDDEN: The outside world cannot change this directly.
    double balance=500.0; 

protected:
    // SHARED WITH FAMILY: Only accessible to this class and its child classes (like SavingsAccount).
    int branchCode; 

public:
    // VISIBLE: Anyone can call this function to safely interact with the private balance.
    int deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
        }
        return balance;
    }
};
int main() {
    BankAccount account;
    cout<<"Depositing 1000 into the account."<<endl;
    cout<<"New balance: "<<account.deposit(1000)<<endl;
    return 0;
}