#include <iostream>
using namespace std;

// class
class Student
{
private:
    string name;
    int age;

public:
    // setter function
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }

    // getter functiom
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1;
    s1.setName("Asish Kumar Bera");
    s1.setAge(21);

    cout<<s1.getName()<<endl;
    return 0;
}