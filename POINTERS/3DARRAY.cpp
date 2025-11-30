#include<iostream>
using namespace std;
int main(){
int h,b,l;
cout<<"Enter h:";
cin>>h;
cout<<"Enter b:";
cin>>b;
cout<<"Enter l:";
cin>>l;
//creating 3D array
int ***ptr=new int **[l];
for(int i=0;i<l;i++){
    ptr[i]=new int *[b];
    for(int j=0;j<b;j++){
        ptr[i][j]=new int[h];
    }
}
//taking input
for(int i=0;i<l;i++){
    for(int j=0;j<b;j++){
    for(int k=0;k<h;k++){
        ptr[i][j][k]=i+j+k;
    }
    }
}
//printing value
cout<<"3D ARRAY:"<<"\n";
 for(int i=0;i<l;i++){
    for(int j=0;j<b;j++){
    for(int k=0;k<h;k++){
        cout<<ptr[i][j][k]<<" ";
    }
    cout<<"\n";
    }
    cout<<"\n";
}
for(int i=0;i<l;i++){
    for(int j=0;j<b;j++){
        delete[] ptr[i][j];
    }
    delete[] ptr[i];
}
delete[] ptr;

    return 0;
}