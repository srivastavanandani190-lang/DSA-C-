#include<iostream>
using namespace std;
// void even(int n){
//     if(n==0){
//         return;
//     }
//     even(n-1);
//     if(n%2==0){
//         cout<<n<<" ";
//     }
// }

// void even(int num,int n){
//     if(num>n){
//         return;
//     }
//     if(num%2==0){
//         cout<<num<<" ";
//     }
//     even(num+1,n);
// }
void even(int n){
    if(n==2){
        cout<<n<<" ";
        return;
    }
    // cout<<n<<" ";
    even(n-2);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Even numbers from 1 to "<<n<<" are: ";
    // even(1,n);
    even(n);    
    return 0;
}