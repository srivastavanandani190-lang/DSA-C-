#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
bool targetSum(int arr[], int index,int n, int target){
    if(target==0){
        return true;
    }
    if(index==n || target<0){
        return false;
    }
    
    return targetSum(arr,index+1,n,target-arr[index]) || targetSum(arr,index+1,n,target);
}
int main(){
    int arr[]={1,2,3,4,5};
    int target=15;
    cout<<targetSum(arr,0,5,target)<<" ";

    return 0;
}