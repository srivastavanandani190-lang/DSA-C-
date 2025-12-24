#include<iostream>
using namespace std;
int zero(int n){
    int ans=0,rem;
    while(n!=0){
        rem=n/5;
        ans=ans+rem;
        n=rem;
    }
    return ans;
}
int main(){
int num;
cout<<"ENTER NUMBER:";
cin>>num;
cout<<"NUMBER OF ZEROS:"<<zero(num);
    return 0;
}