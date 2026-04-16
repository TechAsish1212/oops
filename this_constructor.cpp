#include<iostream>
using namespace std;
    class crickter
    {
        public:
        string name;
        int runs;
        int match;

        crickter(string name,int runs,int match)
        {
            this->name=name;
            this->runs=runs;
            this->match=match;
        }
    };
int main()
{
    crickter c1("virat kohli",25000,250);
    crickter c2("Rohit sharma",19000,230);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.match<<endl;
     cout<<c2.name<<" "<<c2.runs<<" "<<c2.match<<endl;

return 0;
}