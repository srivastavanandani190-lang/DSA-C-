#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //addition of two large numbers using linked list
    string num1, num2;
    cout<<"Enter two large numbers: ";
    getline(cin, num1);
    getline(cin, num2);
     
    list<int> l1, l2;

  
    for(int i=0; i<num1.length(); i+=4){
        string temp = num1.substr(i, 4);
        l1.push_back(stoi(temp));
    }
    for(int i=0; i<num2.length(); i+=4){
        string temp = num2.substr(i, 4);
        l2.push_back(stoi(temp));
    }
 
    list<int> result;
    int carry = 0,sum;
    auto it1 = l1.rbegin();
    auto it2 = l2.rbegin();
    auto end1 = l1.rend();
    auto end2 = l2.rend();

    while(it1 != end1 && it2 != end2){
        int total = *it1 + *it2 + carry;
        sum=total%10000;
        carry=total/10000;
        result.push_front(sum);
        ++it1;
        ++it2;
    }
    while(it1 != end1){
        int total = *it1 + carry;
        sum=total%10000;
        carry=total/10000;
        result.push_front(sum);
        ++it1;
    }
    while(it2 != end2){
        int total = *it2 + carry;
        sum=total%10000;
        carry=total/10000;
        result.push_front(sum);
        ++it2;
    }
    while(carry){
        result.push_front(carry);
        carry=0;
    }
    cout<<"Sum of two large numbers is: ";
    for(auto it = result.begin(); it != result.end(); ++it){
        cout<<*it;
    }
    return 0;

}