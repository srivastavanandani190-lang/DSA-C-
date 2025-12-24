#include<iostream>
using namespace std;
bool powerof2(int n){
  if(n<1) return 0;
while(n!=1){
    if(n%2==1){
    return 0;
    n=n/2;
    }
else
return 1;
}
}
int main(){
int n;
cout<<"Enter number:";
cin>>n;
cout<<powerof2(n);
    return 0;
}