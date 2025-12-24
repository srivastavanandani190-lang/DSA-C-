#include<iostream>
using namespace std;
int sum(int a,int b){
    int ans=a+b;
    return ans;
}
int mul(int a,int b,int c){
    int mul=a*b*c;
    return mul;
}
void fun(){
    cout<<"HELLO! NANDANI."<<"\n"; 
}

int main(){
    int a,b,c;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    cout<<"sum of a and b :"<<sum(a,b)<<"\n";
   cout<<"product of a,b and c :"<<mul(a,b,c)<<"\n";
   fun();
    return 0;
}