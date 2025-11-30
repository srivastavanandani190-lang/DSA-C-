#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"Enter n:";
cin>>n;
cout<<"Enter m:";
cin>>m;
//creating 2D array
int **ptr=new int *[n];
for(int i=0;i<n;i++){
    ptr[i]=new int[m];
}
//taking input
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>ptr[i][j];
    }
}
//printing value
cout<<"2D ARRAY:";
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<ptr[i][j]<<" ";
    }
    cout<<"\n";
}
for(int i=0;i<n;i++){
    delete[] ptr[i];
}
delete[] ptr;

    return 0;
}