#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(string name,int data){
        this->name=name;
        this->data=new int(data);
        cout<<"constructor is called\n";
    }
    void display(){
        cout<<"Name:"<<name<<"\n";
        cout<<"data:"<<*data<<"\n";
    }
    ~customer(){
        delete data;//dynamic memory deletion 
        cout<<"Destructor is called\n";
    }
};
int main(){
    customer A("Nandani",100);
    A.display();
    return 0;
}
//destructor is a special member function that is automatically invoked 
//when an object goes out of scope or is explicitly deleted. 
//deletes the dynamically allocated memory.(location of the object in the heap memory),releases resources and performs cleanup tasks before the object is destroyed.
//both constructor and destructor have the same name as the class but the destructor is preceded by a tilde (~) symbol.
//both constructor and destructor do not have a return type, not even void.
//both in public section, we can have only one destructor for a class and it cannot be overloaded.
