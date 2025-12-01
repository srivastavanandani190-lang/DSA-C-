#include<iostream>
using namespace std;
class a{
/*empty class occupies byte one.An empty class has no data members,
 but C++ still needs to treat each object as unique, so it must have a distinct memory address.
 If sizeof(A) == 0, then obj1 and obj2 would both occupy 0 bytes →
their addresses could be identical → which breaks C++ object model rules.
C++ requires every object to have a unique address so the compiler can distinguish them.
✔ Every object to have a unique address
✔ Arrays of empty objects to work correctly
✔ Pointer arithmetic to behave normally*/
};
int main(){
    a obj1l,obj2;
    cout<<sizeof(obj1l)<<"\n";
    cout<<sizeof(obj2)<<"\n";
    return 0;
}