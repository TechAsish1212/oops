#include<iostream>
using namespace std;
    class student
    {
        public:
        string name;
       int roll ;
        float cgpa;
    };
    void print(student s)
    {
        cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<" ";
    }
int main()
{
    student s1;
    s1.name="Asish kumar Bera";
    s1.roll=12;
    s1.cgpa=7.5;
    
    student s2;
    s2.name="Subhajeet Benarjee";
    s2.roll=144;
    s2.cgpa=8.3;
    print(s1);
    cout<<endl;
    print(s2);
    
return 0;
}