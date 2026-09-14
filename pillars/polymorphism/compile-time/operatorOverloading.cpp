#include<iostream>
using namespace std;

class Student{
    public:
    int id;

    Student(int i){
        id=i;
    }

    // operator overloading
    bool operator==(Student s){
        return id==s.id;
    }
};

int main(){

    Student s1(102);
    Student s2(104);

    if(s1==s2){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }

    
    return 0;
}