#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int *ptr = new int[100000]; // Attempt to allocate a large amount of memory
         
         cout<<"Memory allocated successfully."<<endl;
        delete[] ptr; // Free the allocated memory
    }
    catch(const exception& e){
        cerr << "Exception occurred due to line 6: " << e.what() << endl;
    }
    return 0;
}