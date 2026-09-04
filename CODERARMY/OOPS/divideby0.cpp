#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try{
        if(b==0){
            throw "Division by zero is not allowed";
        }
        else{
            cout<<"Result: "<<a/b<<endl;
        }
    }
    catch(const char* msg){
        cerr<<msg<<endl;
    }
//catch always comes after try block. If we put catch before try, it will give error.
//Because the compiler needs to know what exceptions can be thrown before it can handle them.

    return 0;
}