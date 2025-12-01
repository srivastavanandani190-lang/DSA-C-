#include<iostream>
using namespace std;
class datatype{
    char c;
    // char b;//op-12
    int a;
    char b;//op-16
    float d;
};
int main(){
    datatype obj;
    cout<<sizeof(obj);
    return 0;
}