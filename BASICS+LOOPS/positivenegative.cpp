#include<iostream>
using namespace std;
int main(){
int num;
cout<<"ENTER NUMBER=";
cin>>num;
if(num>0){
    cout<<num<<" is positive integer";
}
 else if(num<0){
    cout<<num<<" is negative integer";
}
else cout<<"zero";
    return 0;
}