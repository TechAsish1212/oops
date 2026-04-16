#include<iostream>
using namespace std;
    class crickter
    {
        public:
        string name;
        int runs;
        float avg;

        crickter(string name , int runs , float avg)
        {
            this->name=name;
            this->runs=runs;
            this->avg=avg;
        }

        void print(float avg)
        {
            cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        }
    };
int main()
{
    crickter c1("Virat Kohli",25000,55.9);
    crickter c2("Rohit Sharma",19000,52.4);
    // c2.avg=47.3;
    c1.print(56.2);
    c2.print(54.5);
return 0;
}