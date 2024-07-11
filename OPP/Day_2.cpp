#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello World Pie" << endl;
    }
    int sayHello(char name)
    {
        cout << "Hello World Pie" << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output is " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "inside bracket" << this->a << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    // A obj;
    // obj.sayHello();

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;
    // obj1 + obj2;

    // obj1();

    Dog obj;
    obj.speak();
    return 0;
}