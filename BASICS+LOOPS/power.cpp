#include<iostream>
using namespace std;
int main(){

int n,power;
cout<<"n=";
cin>>n;
cout<<"power=";
cin>>power;
int count=1;
for(int i=1;i<=power;i++){
    count=count*n;
}
cout<<count;
    return 0;
}