#include<iostream>
using namespace std;
// void fun0(int n){
//     cout<<"Happy Birthday "<<n<<endl;
// }
// void fun1(int n){
//     cout<<n<<" days left for your birthday"<<endl;
//     fun0(0);
// }
// void fun2(int n){
//     cout<<n<<" days left for your birthday"<<endl;
//     fun1(n-1);
// }
void fun3(int n){
    if(n==0){//base case
        cout<<"Happy Birthday "<<endl;
        return;
    }
    cout<<n<<" days left for your birthday"<<endl;
    fun3(n-1);
}
int main(){
    fun3(8);
    return 0;
}
//example -> google calendar countdown to birthday