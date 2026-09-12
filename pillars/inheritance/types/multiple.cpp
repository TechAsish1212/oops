#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
};

class Player
{
protected:
    string sport;
};

class CollegeStudent : public Student, public Player
{
private:
    string name;

public:
    void setData(string name, int roll_no, string sport)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->sport = sport;
    }

    void display()
    {
        cout << "Name     : " << name << endl;
        cout << "Roll No  : " << roll_no << endl;
        cout << "Sport    : " << sport << endl;
    }
};

int main()
{

    CollegeStudent CS1;
    CS1.setData("Asish",12,"Cricket");
    CS1.display();

}