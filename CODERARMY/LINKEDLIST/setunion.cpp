#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l1,l2;

    //input for first list
    int n1;
    cout<<"Enter the number of elements in first list: ";
    cin>>n1;
    cout<<"Enter the elements of first list: ";
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        l1.push_back(x);
    }
    
    //input for second list
    int n2;
    cout<<"Enter the number of elements in second list: ";
    cin>>n2;
    cout<<"Enter the elements of second list: ";
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        l2.push_back(x);
    }

    auto p=l1.begin();
    auto q=l2.begin();
    list<int> result;
    //union of two sorted lists

    while(p!=l1.end() && q!=l2.end()){
        if(*p<*q)
        {
            result.push_back(*p);
            ++p;
        }
         
        else if (*q<*p)
        {
            result.push_back(*q);
            ++q;
        }
        else
        {
           result.push_back(*q);
            ++q;
            ++p;
        }
    }

    while(p!=l1.end()){
        result.push_back(*p);
        ++p;
    }

    while(q!=l2.end()){
        result.push_back(*q);
        ++q;
    }
    
    for(auto it = result.begin(); it != result.end(); ++it){
        cout<<*it<<" ";
    }
    return 0;
}