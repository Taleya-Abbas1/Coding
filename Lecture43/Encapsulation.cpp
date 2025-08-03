#include<iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;
public:
    Hero(int health , char level)
    {
        this->health = health;
        this->level = level;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
};
int main()
{
    Hero hero(100, 'A');
    cout << "Health: " << hero.getHealth() << endl;
    cout << "Level: " << hero.getLevel() << endl;
    return 0;
}