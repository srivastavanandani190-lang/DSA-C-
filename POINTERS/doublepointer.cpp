#include<iostream>
using namespace std;
int main(){
int a=10;
int *p1=&a;
int **p2=&p1;
int ***p3=&p2;
int ****p4=&p3;
//Addresses
cout<<p1<<"\n";
cout<<p2<<"\n";
cout<<p3<<"\n";
cout<<p4<<"\n";
//values
cout<<*p1<<"\n";
cout<<*p2<<"\n";//stored value as address of p1
cout<<**p2<<"\n";
cout<<***p3<<"\n";
cout<<****p4<<"\n";
***p3+=10;
cout<<"Modified a:"<<a;
    return 0;
}