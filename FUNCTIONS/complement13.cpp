#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter value of num:";
cin>>num;
int ans=0,rem,mul=1,original;
original=num;
while(num!=0){
    rem=num%2;
    rem=rem^1;
    num=num/2;
    ans=ans+rem*mul;
    mul=mul*2;
}
cout<<"complement of "<<original<<" is "<<ans;

    return 0;
}