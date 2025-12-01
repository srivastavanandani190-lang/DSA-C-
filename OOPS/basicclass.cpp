#include<iostream>
using namespace std;
class Student{
public:
string name;
int age,rollno;
string grade;
};
int main(){
    Student s1,s2;
    s1.name="Honey";
    s1.age=20;
    s1.rollno=21;
    s1.grade="A++";
    cout<<"Student 1 details:"<<"\n";
    cout<<"Name:"<<s1.name<<"\n";
    cout<<"Age:"<<s1.age<<"\n";
    cout<<"Roll number:"<<s1.rollno<<"\n";
    cout<<"Grade:"<<s1.grade<<"\n";
    s2.name="Muskan";
    s2.age=20;
    s2.rollno=22;
    s2.grade="A++";
    cout<<"Student 2 details:"<<"\n";
    cout<<"Name:"<<s2.name<<"\n";
    cout<<"Age:"<<s2.age<<"\n";
    cout<<"Roll number:"<<s2.rollno<<"\n";
    cout<<"Grade:"<<s2.grade<<"\n";
    return 0;
}