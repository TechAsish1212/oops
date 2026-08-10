#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll_number;
    string grade;
};

int main()
{

    Student s1;
    s1.name = "Asish";
    cout << s1.name << endl;

    return 0;
}