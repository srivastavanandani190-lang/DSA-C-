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
if(original==sum) cout<<"Yes Pallindrome";
else cout<<"Not Pallindrome";

    return 0;
}