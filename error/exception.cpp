#include <iostream>
using namespace std;

class Customer
{
    string nmae;
    int acc_no, balance;

public:
    Customer(string name, int acc_no, int balance)
    {
        this->nmae = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs is credited successfully\n";
            cout << "Current account Balance is:: " << balance<<endl;
        }
        else
        {
            throw "Amount should be greater than 0";
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
            cout << amount << " rs is debited successfully\n";
        }
        else if (amount < 0)
        {
            throw "Amount should be greater than 0";
        }
        else
        {
            throw "Your withdrawal balance is not sufficient\n";
        }
    }
};

int main()
{

    try
    {
        Customer C1("Asish", 10, 10000);
        C1.deposit(500);
        C1.withdraw(12000);
    }catch(const char *msg){
        cout<<"error occuring:: "<<msg;
    }
}