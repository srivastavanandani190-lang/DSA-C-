#include<iostream>
using namespace std;
char convert(char name){
    char ans=name-'a'+'A';//same for viceversa
    return ans;
}
int main(){
    char name;
    cout<<"CHARACTER:";
    cin>>name;
    cout<<convert(name);
    return 0;
}