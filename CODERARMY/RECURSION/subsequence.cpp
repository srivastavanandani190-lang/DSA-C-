#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(string s,int index,int n,vector<string> &ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    subset(s,index+1,n,ans,temp);
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();//why? &temp
    //because we need to backtrack and remove the last element added to temp before returning to the previous state of recursion.
    // This ensures that when we explore other subsets, we do not carry over elements that were added in a different branch of the recursion tree.
}
int main() {
     string s="abc";
    vector<string> ans;
    string temp;
    subset(s,0,s.length(),ans,temp);
    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}