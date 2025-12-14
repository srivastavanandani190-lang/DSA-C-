#include<iostream>
using namespace std;
class customer{
string name;
int accountnumber;
int balance;
//default constructor
public:
customer(){
    cout<<"Default constructor!"<<"\n";
    name="Nandani";
    accountnumber=12345;
    balance=5089635;
}
customer(string name,int accountnumber,int balance){
  this->name=name;//Parameterised constructor
  this->accountnumber=accountnumber;
  this->balance=balance;

}
//constructor overloading
//inline constructor
customer(string a,int b){
    name=a;
    accountnumber=b;
    balance=5000;
}
void display(){
    cout<<"Name:"<<name<<"\n";
    cout<<"accountnumber:"<<accountnumber<<"\n";
    cout<<"balance:"<<balance<<"\n";
}
customer(customer &B){//copy constructor created
    name=B.name;
    accountnumber=B.accountnumber;
    balance=B.balance;
}
};
int main(){
    customer obj1;
    customer A1("rohit",10000,12533); 
    customer A2("Anjali",4236987);
    obj1.display();
    A1.display();
    A2.display();
    customer A3(A2);//default copy constructor
    A3.display();
    customer A4;
    A4=A1;
    A4.display();
    return 0;
}