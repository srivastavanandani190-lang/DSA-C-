#include<iostream>
#include<vector>
using namespace std;
class animal{
    public:
    //pure virtual function
    //virtual void sound()=0; abstract class
    virtual void sound(){
        cout<<"Animal makes a sound"<<endl;
    }
};
class dog: public animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

class cat: public animal{
    public:
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    animal *a;
    dog d;
    a = &d;
    a->sound(); // Calls animal's sound() because it's not virtual
    animal *b;//parent class pointer
    vector<animal*> animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    for(int i=0;i<animals.size();i++){
        b=animals[i];
        b->sound(); // Calls the appropriate sound() based on the object type
    }  
    return 0;
}