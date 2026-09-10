#include<iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"This is Parent class"<<endl;
    }
};

class Child: public Parent{
    Parent obj;
};

int main()
{
    Child obj;
    obj.display();
    return 0;
}