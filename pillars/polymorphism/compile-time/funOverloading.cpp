// method or function overloading---> functons have same name but different parameter
#include<iostream>
using namespace std;

class Area{
    public:
        float calculateArea(int r){
            return 3.14*r*r;
        }

        float calculateArea(int l,int b){
            return l*b;
        }
};

int main(){

    Area Circle,Rectangle;

    cout<<Circle.calculateArea(4)<<endl;

    cout<<Rectangle.calculateArea(6,7)<<endl;
    

    return 0;
}