#include<iostream>
using namespace std;

void oddevennum(int n){
    if(n==-1){
        return ;
    }
    if(n==0){
        return ;
    }
    oddevennum(n-2);  
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    oddevennum(n);
    return 0;
}