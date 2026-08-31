#include<iostream>
using namespace std;
class Bank{
 
    //this is done to protect data members from being accessed directly and to provide controlled access to them
    //data hiding by writing data members as private and providing public member functions to access them is called encapsulation
    //encapsulation is the process of wrapping data and code together in a single unit.
    private:
        int balance;
    public:
        Bank(int bal){
            balance = bal;
        }
        void deposit(int amount){
            if(amount > 0){
            balance += amount;
        }
    }
        void withdraw(int amount){
            if(amount <= balance){
                balance -= amount;
                cout << "Withdrawal successful" << endl;
                cout<< "Balance after withdrawal: " << balance << endl;
            } else {
                cout << "Insufficient funds" << endl;
            }
        }
        int getBalance(){
            return balance;
        }
};
int main(){
    Bank b1(3000);
    b1.deposit(800);
    cout << "Balance after deposit: " << b1.getBalance() << endl;
    b1.withdraw(200);

    return 0;
}