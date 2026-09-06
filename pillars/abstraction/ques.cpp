#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : Shape
{
private:
    int len, wid;

public:
    Rectangle(int len, int wid)
    {
        this->len = len;
        this->wid = wid;
    }

    void area(){
        int ans=this->len * this->wid;
        cout<<"Area of Rectangle:: "<<ans<<endl;
    }
};

class Circle : Shape{
    private:
        float rad;
    public:
        Circle(float rad){
            this->rad=rad;
        }

        void area(){
            float ans=3.14*this->rad*this->rad;
            cout<<"Area of Circle:: "<<ans<<endl;
        }
};

int main()
{
    Rectangle R(5,7);
    Circle C(7);

    R.area();
    C.area();

    return 0;
}