#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream rf;
    rf.open("hello.txt");
    char ch;
    ch=rf.get();
    while(!rf.eof())
    {
        cout<<ch;
        ch=rf.get();
    }
    rf.close();
    cout<<endl;
    
    return 0;
}