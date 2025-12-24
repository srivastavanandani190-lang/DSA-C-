#include<iostream>
#include<cmath>
using namespace std;
int count(int num){
    int count=0;
    while(num!=0){
        count++;
        num=num/10;
    }
    return count;
}
bool armstrong(int num,int digit){
    int original=num,ans=0,rem;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+pow(rem,digit);
    }
if(original==ans)
return 1;
else 
return 0;
}
int main(){
int num;
cout<<"Enter number:";
cin>>num;
int digit=count(num);
cout<<"NUMBER OF DIGITS:"<<digit<<"\n";
cout<<armstrong(num,digit);

    return 0;
}