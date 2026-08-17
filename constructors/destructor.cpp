#include <iostream>
using namespace std;


class Test{
    public:
        Test(){
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
};

int main() {
    Test T1;
    cout<<"Main"<<endl;
    
    return 0;
}