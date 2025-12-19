#include<iostream>
using namespace std;
class human {
    public:
     string name;
     void display_name() {
         cout << "Name: " << name << endl;
     }  
};
class engineer: public virtual human {
    public:
    string specialization;
    void show_specialization() {
        cout << "Specialization: " << specialization << endl;
    }
};
class manager: public virtual human {
    public:
    int team_size;
    void show_team_size() {
        cout << "Team Size: " << team_size << endl;
    }
};
class tech_lead : public manager, public engineer {
    public:
     int salary;
     tech_lead(string name, string spec, int team, int sal) {
         this->name = name;
         this->specialization = spec;
         this->team_size = team;
         this->salary = sal;
     }
     void work(){
        cout << "Tech Lead Details:" << endl;
        display_name();
        show_specialization();  
        show_team_size();

     }
};
int main(){
    tech_lead t1("Nandani","CSE",456,78966666);
    t1.work();
    return 0;
}