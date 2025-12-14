#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(){
        name="Honey";
        *data=10;
        cout<<"constructor is called\n";
    }
    ~customer(){
        delete data;//dynamic memory deletion 
        cout<<"Destructor is called\n";
    }
};
int main(){
    customer A;
    return 0;
}