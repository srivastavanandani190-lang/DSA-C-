#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number n:";
cin>>n;
int sum=1;
int a=1;
int b=1;
for(int i=0;i<=n-2;i++){
     sum=a+b;//term starts from zero.
     a=b;
     b=sum;
}
cout<<"term at "<<n<<" is :"<<sum;
    return 0;
}