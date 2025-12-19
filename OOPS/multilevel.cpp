#include<iostream>
using namespace std;
class person{
protected:
    string name;
public:
    void introduce(){
        cout<<"I am a person named "<<name<<endl;
    }
};
class employee: public person{
protected:
    int salary;
public:
    void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }
};
class manager: public employee{
    protected:
        string department;
        public:
        manager(string name, int salary, string department){
            this->name = name;
            this->salary = salary;
            this->department = department;
        }
        void work(){
            cout<<"I am a manager of "<<department<<" department."<<endl;
        }
    };
int main(){
    manager mgr("Alice", 5000, "Sales");
    mgr.introduce();
    mgr.monthly_salary();
    mgr.work();
        return 0;
    }