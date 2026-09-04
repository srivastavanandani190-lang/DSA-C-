#include<iostream>
using namespace std;

class bankcustomer{
    
    int balance;
    string name;
    public:
    bankcustomer(string n, int b){
        name=n;
        balance=b;
    }
    void withdraw(int amount){
        if(amount>balance){
            throw "Insufficient Balance";
        }
        else if(amount<0){
            throw "Invalid Amount";
        }
        else{
            balance-=amount;
            cout<<"Withdrawal Successful. Remaining Balance: "<<balance<<endl;
        }

    }
    void deposit(int amount){
        balance+=amount;
        cout<<"Deposit Successful. New Balance: "<<balance<<endl;
    }   
};
int main(){
    bankcustomer b("Alice", 1000);
    try{
        b.deposit(500);
        b.withdraw(200);
    }
    catch(const char* msg){
        cerr<<msg<<endl;
    }

    return 0;
}