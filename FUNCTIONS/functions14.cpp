#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"for a->"<<"\n";
    cout<<prime(a)<<"\n";
    cout<<factorial(a)<<"\n";
     cout<<"for b->"<<"\n";
    cout<<prime(b)<<"\n";
    cout<<factorial(b)<<"\n";
    cout<<prime(a-b)<<"\n";
    int res=factorial(a)-factorial(b);
    cout<<"difference of both factorial"<<res;

    return 0;
}