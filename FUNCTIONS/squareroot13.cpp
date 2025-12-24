#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:";
cin>>n;
 int a=0;
for(int i=1;i<=n;i++){
    if(i*i<=n){
        a++;
    }
}
cout<<a;

    return 0;
}