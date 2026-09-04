#include<iostream>
using namespace std;

class AREA{
public:
int calcualte_area(int length, int breadth){
    return length*breadth;
}
int calcualte_area(int side){
    return side*side;
}
};
int main(){
    AREA a1;
    cout<<"Area of rectangle: "<<a1.calcualte_area(5,6)<<endl;
    cout<<"Area of square: "<<a1.calcualte_area(5)<<endl;

    return 0;
}