#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accHolderName;
    int balance;

public:
    BankAccount(string name, int bal)
    {
        accHolderName = name;
        balance = bal;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " deposite successfully" << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    void withdrawal(int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount < balance)
        {
            balance -= amount;
            cout << amount << " withdrawal successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    int getBalance()
    {
        return balance;
    }

    void display()
    {
        cout << "Account Holder Name:: " << accHolderName << endl;
        cout << "Balance:: " << balance << endl;
    }
};

int main()
{

    BankAccount acc("Asish", 1000);

    acc.display();
    cout << endl;

    acc.deposit(500);
    cout << "Current Balance:: " << acc.getBalance() << endl;
    cout << endl;

    acc.withdrawal(1200);
    cout << "Current Balance:: " << acc.getBalance() << endl;
    cout<<endl;

    acc.withdrawal(500);
    cout << "\nCurrent Balance:: " << acc.getBalance() << endl;

    return 0;
}