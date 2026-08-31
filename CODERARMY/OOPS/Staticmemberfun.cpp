#include<iostream>
using namespace std;
class customer{
string name;
int accountnumber,balance;

//static data member-->can be accessed without creating object of class using scope resolution operator and class name
static int total_customer;
static int total_balance;

public:
//static int total_balance;

customer(string name,int accountnumber,int balance){
    this->name=name;
    this->accountnumber=accountnumber;
    this->balance=balance;
    total_customer++;
    total_balance+=balance;
}

//static member function->can access only static data members of class and can be called without creating object of class using scope resolution operator and class name
static void access(){
    cout<<"Total customer: "<<total_customer<<"\n";
    cout<<"Total balance: "<<total_balance<<"\n";
}

void deposit(int amount){
    if(amount>0){
        balance+=amount;
        total_balance+=amount;
    }
    else{
        cout<<"Given amount can't be deposited!"<<"\n";
    }
}

void withdraw(int amount){
    if(amount<=balance && amount>0){
        balance-=amount;
        total_balance-=amount;
    }
     else{
        cout<<"Given amount can't be withdrawl!"<<"\n";
    }
}

void display(){
    cout<<name<<" "<<accountnumber<<" "<<balance<<"\n";
}
};

int customer::total_balance=0;
int customer::total_customer=0;

int main(){
customer A1("Honey",1,12000);
customer A2("Anjali",2,45000);
customer A3("Nilli",3,7000);
customer A4("Parth",4,10000);
A1.display();
A2.deposit(800);
A3.withdraw(100);
A4.display();

//customer::total_balance=1089600; //can be accessed only when it is in public
//customer::total_customer=4; //can be accessed only when it is in public

customer::access();
    return 0;
}