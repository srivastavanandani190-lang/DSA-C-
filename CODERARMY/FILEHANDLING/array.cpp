#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    ofstream fout;
    fout.open("numbers.txt");
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout<<"\nSorted data\n";
    sort(arr, arr + 5);
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout.close();
    return 0;
}