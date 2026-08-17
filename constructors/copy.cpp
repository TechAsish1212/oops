#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n,int a){
        name=n;
        age=a;
    }

    Student(Student &obj){
        name=obj.name;
        age=obj.age;
    }

    void display(){
        cout<<"Name:: "<<name<<endl;
        cout<<"Age:: "<<age<<endl;
    }
};

int main()
{
    Student S1("Subho",21);
    Student S2(S1);
    S2.display();

    return 0;
}