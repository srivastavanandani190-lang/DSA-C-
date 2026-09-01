#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream wf;
    wf.open("hello.txt");
    wf<<"Hello World\n";
    wf<<"file handling in c++";
    wf.close();
    return 0;
}