#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int acc_number;
    int acc_balance;

    // Default constructor
    Customer()
    { 
        cout << "Constructor is created" << endl;
    }

    Customer(string p): name(p){} // inline cinstructor

    Customer(string name,int acc_number){
        this->name=name;
        this->acc_number=acc_number;
        this->acc_balance=0;
    }

    // Parameterized Constructor
    Customer(string a,int b,int c){
        name=a;
        acc_number=b;
        acc_balance=c;
    }

    void display(){
        cout<<"Name:: "<<name<<endl;
        cout<<"Account Number:: "<<acc_number<<endl;
        cout<<"Account Balance:: "<<acc_balance<<endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("Asish",123456789,200);
    Customer A3("Asish",12345);
    Customer A4("Asish");
    cout<<"------------------"<<endl;
    A2.display();
    cout<<"------------------"<<endl;
    A3.display();
    cout<<"------------------"<<endl;
    A4.display();
    
    return 0;
}