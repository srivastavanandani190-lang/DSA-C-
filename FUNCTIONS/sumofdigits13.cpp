#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int original;
      original=num;

    while(num>9){
         int sum=0,rem;
        while(num!=0){
            rem=num%10;
            num=num/10;
            sum=sum+rem;
        }
        num=sum;
    }
    cout<<"Sum of digits of "<<original<<" is "<<num;

    return 0;
}