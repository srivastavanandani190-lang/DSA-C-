#include<iostream>
using namespace std;
void swap(int &x,int &y){//pass by reference.
    int temp=x;
    x=y;
    y=temp;
  return ;
}
//*x and *y
void swap(float &c,float &d){
    float tem=c;
    c=d;
    d=tem;
}
int main(){

int a,b;
cout<<"a:";
cin>>a;
cout<<"b:";
cin>>b;
swap(a,b);
cout<<"a:"<<a<<"\n"<<"b:"<<b<<"\n";
float c,d;
cout<<"c:";
cin>>c;
cout<<"d:";
cin>>d;
swap(c,d);

cout<<"c:"<<c<<"\n"<<"d:"<<d<<"\n";
    return 0;
}