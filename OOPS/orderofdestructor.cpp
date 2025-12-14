#include<iostream>
using namespace std;
class customer{
string name;
int *data;
public:
customer(){
    name="4";
    cout<<"Constructor is"<<name<<"\n";
}
customer(string name){
this->name=name;
cout<<"Constructor is "<<name<<"\n";
}
~customer(){
    cout<<"Destructor is "<<name<<"\n";
}
};
int main(){
    customer A1("1"),A2("2"),A3("3");
    customer*A4=new customer;
    delete A4;
    //destructor goes in reverse order remove memory dynamically.
    return 0;
}