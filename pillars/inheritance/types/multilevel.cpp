#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
};

class Employee:public Person{
    protected:
    int salary;
};

class Manager: public Employee{
    string dept;
    int no_of_emp;

    public:
    Manager(string name,int age,int salary,string dept,int no_of_emp){
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->dept=dept;
        this->no_of_emp=no_of_emp;
    }

    void display(){
        cout<<"Name:: "<<name<<endl;
        cout<<"Age:: "<<age<<endl;
        cout<<"Salary:: "<<salary<<endl;
        cout<<"Department:: "<<dept<<endl;
        cout<<"No of Employee:: "<<no_of_emp<<endl;
    }
};

int main(){

    Manager M1("Asish",21,30000,"Full Stack Developer",12);
    M1.display();

    return 0;
}