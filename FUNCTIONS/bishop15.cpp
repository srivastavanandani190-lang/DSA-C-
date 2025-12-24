#include<iostream>
using namespace std;
int bishop(int A,int B){
    int count=0;
    count =count+min(A-1,B-1);
    count =count+min(A-1,8-B);
    count =count+min(8-A,B-1);
    count =count+min(8-A,8-B);
    return count;

}
int main(){
    int a,b;
    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    cout<<bishop(a,b);
    return 0;
}