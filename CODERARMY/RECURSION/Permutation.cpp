#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutation(int arr[],int n,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            temp.push_back(arr[i]);
            permutation(arr,n,ans,temp,visited);
            temp.pop_back();
            visited[i]=false;
        }
    }
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>> ans;
    vector<int>temp;
    vector<bool>visited(3,false);
    permutation(arr,3,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}