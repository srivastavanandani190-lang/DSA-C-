#include<iostream>
using namespace std;
void fun(int *p1){
    *p1=*p1+5;
}
void func(int **p2){
    *p2+=1;
}
int main(){
int n=10;
int *p=&n;
int **p1=&p;
fun(p);
cout<<p<<"\n";
func(p1);
cout<<n<<"\n";
cout<<p;
    return 0;
}