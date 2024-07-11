#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "Constructor called" << endl;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Health is " << this->health << endl;
        cout << "Level is " << this->level << endl;
    }

    void getLevel()
    {
        cout << level << endl;
    }

    int gethealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero S(11, 'A');
    S.print();

    Hero R(S);
    R.print();
}