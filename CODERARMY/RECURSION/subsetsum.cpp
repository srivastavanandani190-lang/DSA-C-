#include<iostream>//this is used to include the iostream header file in c++.
#include<bits/stdc++.h>//this is used to include all the standard libraries in c++.
using namespace std;//this is used to include all the header files in c++.

void print(int arr[],int index,int n,int sum){
    if(index==n){
        cout<<sum<<"\n";
        return;
    }
    print(arr,index+1,n,sum);
    print(arr,index+1,n,sum+arr[index]);
}

int main(){
    int arr[]={3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,0,n,0);
    //store in vector and print here itself
    return 0;
}
