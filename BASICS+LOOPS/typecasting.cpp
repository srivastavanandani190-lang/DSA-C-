#include<iostream>
using namespace std;
int main(){
int x=67;
char c=(char)x;//typecasting.
char d='A';
int y=(int)d;
cout<<c<<"\n";
cout<<y;
//typecasting should be done on taking memory allocation with consideration.
//bool->char->int->float->double->long

    return 0;
}