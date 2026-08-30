#include<iostream>
using namespace std;
class customer{
string name;
int accountnumber;
int balance;
public:
//default constructor
customer(){
    cout<<"Default constructor!"<<"\n";
    name="Nandani";
    accountnumber=12345;
    balance=5089635;
}

//Parameterised constructor
// customer(string name,int accountnumber,int balance){
//   this->name=name;
//   this->accountnumber=accountnumber;
//   this->balance=balance;

// }//this pointer is used to refer to the current object of the class.
//It is used to access the members of the current object and to differentiate between member variables and local variables with the same name.  

//constructor overloading
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

//inline constructor
inline customer(string a,int b,int c):name(a),accountnumber(b),balance(c){
    cout<<"Inline default constructor!"<<"\n";
}

//copy constructor created
customer(customer &B){
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