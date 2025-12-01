#include<iostream>
using namespace std;
class Student{
string name;
int age,rollno;
string grade;

public:
//SETTER
void setname(string s){
    name=s;
}
void setage(int a){
    age=a;
}
void setrollno(int b){
    rollno=b;
}
void setgrade(string r){
    grade=r;
}
//GETTER
void getname(){
    cout<<name<<"\n";
}
void getage(){
    cout<<age<<"\n";
}
int getrollno(){
    return rollno;
}
string getgrade(int pin){
    if (pin==3125){
        return grade;
    }
    return " ";
}
};
int main(){
    Student s1,s2;
     s1.setname("Honey");
     s1.setage(20);
     s1.setrollno(21);
     s1.setgrade("A+");
     cout<<"Student 1 details:"<<"\n";
     s1.getname();
     
     s1.getage();
     cout<<s1.getrollno()<<"\n";
     cout<<s1.getgrade(3125)<<"\n";

     s2.setname("Anjali");
     s2.setage(20);
     s2.setrollno(22);
     s2.setgrade("A+");
    cout<<"Student 2 details:"<<"\n";
     s2.getname();
     s2.getage();
     cout<<s2.getrollno()<<"\n";
     cout<<s2.getgrade(3125)<<"\n";
    return 0;
}