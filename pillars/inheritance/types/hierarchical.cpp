#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void setHuman(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Student: public Human{
    public:
        void studentDisplay(){
            cout<<"Student Name:: "<<name<<endl;
            cout<<"Age:: "<<age<<endl;
        }
};

class Teacher: public Human{
    public:
        void teacherDisplay(){
            cout<<"Teacher Name:: "<<name<<endl;
            cout<<"Age:: "<<age<<endl;
        }
};

int main()
{
    Student s;
    s.setHuman("Asish",21);
    s.studentDisplay();

    Teacher t;
    t.setHuman("Subho sir",30);
    t.teacherDisplay();

    return 0;
}