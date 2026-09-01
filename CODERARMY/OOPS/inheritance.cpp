#include<iostream>
using namespace std;
class human{
    string relegion,color;
    protected://helps in encapsulation and access of derived class.
    string name;
    int age,weight;

};
class student:private human{
    private:
    int rollnum,fees;
    public:
    student(string name,int age,int weight,int rollnum,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->rollnum=rollnum;
        this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<rollnum<<" "<<fees<<" ";
    }
};
int main(){
    student a("Nandani",20,65,730,136000);
    a.display();
    return 0;
}
// A BankAccount base class keeps its balance private to prevent unauthorized tampering, 
// shares a protected calculateInterest() method exclusively with its SavingsAccount subclass,
//  and exposes a public deposit() method for the customer to use.