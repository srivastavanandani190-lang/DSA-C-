#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter year:";
cin>>year;
if(year%400==0) cout<<"Yes Leap Year";
else if(year%4==0 && year%100!=0) cout<<"Yes Leap Year";
else cout<<"Not Leap Year";

    return 0;
}