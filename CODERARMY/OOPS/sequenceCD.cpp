#include<iostream>
using namespace std;
class customer{
    string name;
    public:
    customer(string a){
        name=a;
        cout<<"Constructor called for "<<name<<"\n";
    }
    ~customer(){
        cout<<"Destructor called for "<<name<<"\n";
    }   
};
int main(){
    customer A1("Rohit");
    customer A2("Anjali");
    customer A3("Nandani");
    customer *A4=new customer("Honey");
    delete A4;
    return 0;
}
//constructor is called when an object is created one by one and destructor is called when an object is destroyed i.e reverse order.
//why destructor is called in reverse order because of the stack data structure used to manage the memory allocation for objects.
// When an object is created, it is pushed onto the stack, and when it goes out of scope or is explicitly deleted, it is popped off the stack.
//This LIFO (Last In, First Out) behavior ensures that destructors are called in the reverse order of construction.