#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number n:";
cin>>n;
int factorial=1;
if(n==0) cout<<"factorial of "<<n<<" is :"<<1<<"\n";
else{
for(int i=1;i<=n;i++){
    factorial=factorial*i;
    //cout<<"factorial of "<<i<<" is :"<<factorial<<"\n";
}
cout<<"factorial of "<<n<<" is :"<<factorial<<"\n";}
    return 0;
}