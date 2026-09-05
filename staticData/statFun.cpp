#include <iostream>
using namespace std;


class Student{
    public:
        static int count;
        static void display(){
            cout<<"Count= "<<count<<endl;
        }
};

int Student::count=10;

int main() {

    Student::display();
    
    return 0;
}