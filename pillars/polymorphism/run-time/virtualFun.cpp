// without virtual functions
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal Sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog Barks" << endl;
//     }
// };

// int main() {
//     Animal* ptr;

//     ptr = new Dog();
//     ptr->sound();

//     return 0;
// }

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Barks" << endl;
    }
};

int main() {
    Animal* ptr;

    ptr = new Dog();
    ptr->sound();

    return 0;
}