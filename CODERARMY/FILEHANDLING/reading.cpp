#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  ofstream fout;
    fout.open("output.txt");
    fout<<"Hello, this is a test file.\n";
    fout<<"This file is created using C++ file handling.\n";
    fout.close();
    ifstream fin;
    fin.open("output.txt");
    string line;
    while(getline(fin, line)) {
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}