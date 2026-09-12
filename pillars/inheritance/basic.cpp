#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age, weight;
};

class Student : protected Human
{
private:
    int roll_no, fees;

public:
    void setData(string n, int a, int w, int r, int f)
    {
        name = n;
        age = a;
        weight = w;
        roll_no = r;
        fees = f;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main()
{
    Student obj;
    obj.setData("Asish", 20, 60, 101, 5000);
    obj.displayData();
    return 0;
}