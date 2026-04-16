#include<iostream>
using namespace std;
    class student
    {
        public:
        string name;
       int roll ;
        float cgpa;

        //constructor
        student(string n,int r,float g)
        {
            name=n;
            roll=r;
            cgpa=g;
        }
        student(string n,int r)
        {
            name=n;
            roll=r;
            // cgpa=c;
        }
         student()
        {

        }
    };
int main()
{
    student s("Asish Kumar Bera",12);
    // s1.name="Asish kumar Bera";
    s.roll=133;
     s.cgpa=7.5;
    
    student s1;
    s1.name="Subhajeet Benarjee";
    s1.roll=144;
    s1.cgpa=8.3;
    student s3("Asish Kumar Bera",12,9.6);
    cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<endl;
     cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;
     cout<<s3.name<<" "<<s3.roll<<" "<<s3.cgpa<<endl;
return 0;
}