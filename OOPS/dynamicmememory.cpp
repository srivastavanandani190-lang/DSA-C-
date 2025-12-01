#include<iostream>
using namespace std;
class Student{
public:
string name;
int age,rollno;
string grade;
};
int main(){
     Student *S=new Student;
     (*S).name="Honey";
     (*S).age=20;
     (*S).rollno=21;
     (*S).grade="A++";
     cout<<"Name:"<<S->name<<"\n";
     cout<<"Age:"<<S->age<<"\n";
     cout<<"Rollno:"<<S->rollno<<"\n";
     cout<<"Grade:"<<S->grade<<"\n";
    return 0;
}