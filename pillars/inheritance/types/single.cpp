#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public: 
    void work()
    {
        cout << "Human is working" << endl;
    }
};

class Student : public Human
{

    int roll_no, fees;

public:
    Student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name :: " << name << endl;
        cout << "Age :: " << age << endl;
        cout << "Roll Number :: " << roll_no << endl;
        cout << "Fees :: " << fees << endl;
    }
};

int main()
{
    Student s1("Asish", 21, 12, 23000);
    s1.work();
    s1.display();

    return 0;
}