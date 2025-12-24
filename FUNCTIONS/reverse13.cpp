#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter number:";
cin>>num;
int original=num;
int sum=0,rem;
while(num!=0){
    rem=num%10;
    num=num/10;
    sum=sum*10+rem;
}
cout<<"Reverse of "<<original<<" is "<<sum;

    return 0;
}