#include <iostream>
using namespace std;

class Customer{
    private:
        string name;
        int balance;
        int age;
    public:
        Customer(string name,int balance,int age){
            this->name=name;
            this->balance=balance;
            this->age=age;
        }

        void checkAmount(int amount){
            if(amount>0){
                balance+=amount;
            }else{
                cout<<"Invalid Amount"<<endl;
            }
        }

        void checkAge(int age){
            if(age>0 && age<100){
                this->age=age;
            }else{
                cout<<"Invalid age"<<endl;
            }
        }

        void display(){
            cout<<"Name:: "<<name<<endl;
            cout<<"Age:: "<<age<<endl;
            cout<<"Balance:: "<<balance<<endl;
        }
};

int main() {
    
    Customer A1("Asish",1000,21);
    A1.display();
    A1.checkAmount(-100);
    A1.display();

    return 0;
}