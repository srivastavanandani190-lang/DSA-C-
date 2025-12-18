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
    void setDetails(string name, int age, string school,int rollNumber,int fee) {
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
int main() {
    student s1;
    s1.setDetails("Alice", 20, "XYZ High School", 101,5000);
    s1.display();
    s1.work(); // Inherited method from human class
    return 0;
}