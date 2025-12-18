#include<iostream>
using namespace std;
class human {
    protected:
    string name;
    int age;
    public:
    void work() {
        cout << "Human is working" << endl;
    }
};
class student : public human {
    private:
    string school;
    int rollNumber,fee;
    public:
    student(string name, int age, string school,int rollNumber,int fee) {
        this->name = name;
        this->age = age;
        this->school = school;
        this->rollNumber = rollNumber;
        this->fee=fee;
         
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "School: " << school << endl;
    }
};
class teacher : public human {
    protected:
    string subject;
    int employeeID;
    public:
    teacher(string name, int age, string subject, int employeeID) {
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->employeeID = employeeID;
    }
    void display1() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};
int main() {
    student s1("Alice", 20, "XYZ High School", 101,5000);
    s1.display();
    s1.work(); // Inherited method from human class
    teacher t1("Bob", 35, "Mathematics", 5001);
    t1.display1();
    t1.work(); // Inherited method from human class
    return 0;
}