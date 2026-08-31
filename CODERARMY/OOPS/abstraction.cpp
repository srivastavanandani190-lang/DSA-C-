#include<iostream>
using namespace std;

//displaying only the essential features of an object to the outside world and hiding the unnecessary details is called abstraction
//abstraction is the process of hiding the implementation details and showing only functionality to the user.

class customer{
    int balance;
    string name;
    public:
    customer(string name,int balance){
        this->name=name;
        this->balance=balance;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Given amount can't be deposited!"<<"\n";
        }
    }
    void display(){
        cout<<name<<" "<<balance<<"\n";
    }

};
int main(){
    customer A1("Honey",12000);
    A1.deposit(5000);
    A1.display();
    return 0;
}
  