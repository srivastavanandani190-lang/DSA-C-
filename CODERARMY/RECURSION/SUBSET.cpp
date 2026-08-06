#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(int arr[],int index,int n,vector<vector<int>> &ans,vector<int> &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    subset(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    subset(arr,index+1,n,ans,temp);
    temp.pop_back();//why? &temp
    //because we need to backtrack and remove the last element added to temp before returning to the previous state of recursion.
    // This ensures that when we explore other subsets, we do not carry over elements that were added in a different branch of the recursion tree.
}
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;
    vector<int> temp;
    subset(arr,0,n,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}