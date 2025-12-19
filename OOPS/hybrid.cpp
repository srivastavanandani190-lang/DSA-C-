#include<iostream>
using namespace std;
class student{
    public:
    void print(){
    cout<<"This is student class"<<endl;
}
};
class male{
    public:
    void maleprint(){
        cout<<"I am male"<<endl;
    }
};
class female{
    public:
    void femaleprint(){
        cout<<"I am female"<<endl;
    }
};
class boy: public student, public male{
    public:
    void boyprint(){
        cout<<"I am a boy"<<endl;       
    }
};
class girl: public student, public female{
    public:
    void girlprint(){
        cout<<"I am a girl"<<endl;       
    }  
};
int main(){
    girl g;
    g.print();
    g.femaleprint();
    g.girlprint();
    boy b;
    b.print();      
    b.maleprint();
    b.boyprint();
    return 0;
}