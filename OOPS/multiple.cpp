#include<iostream>
using namespace std;

class engineer {
    public:
    engineer(){
        cout << "Engineer Constructor Called" << endl;
    }
    string specialization;
    void show_specialization() {
        cout << "Specialization: " << specialization << endl;
    }
};
class manager {
    public:
    manager(){
        cout << "Manager Constructor Called" << endl;
    }
    int team_size;
    void show_team_size() {
        cout << "Team Size: " << team_size << endl;
    }
};
class tech_lead : public manager, public engineer{//depending on sequence of inheritance constructor will be called
    public:
    void show_details() {
        show_specialization();
        show_team_size();
    }
};
int main() {
    tech_lead tl;
    tl.specialization = "Software Development";
    tl.team_size = 10;
    tl.show_details();
    tech_lead t2;
    return 0;
}