#include<iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
    Hero h1; // object creation

    cout << "Health of " << h1.name << " is " << h1.health << endl;
    h1.health = 10; // modifying health
    cout << "Updated Health of " << h1.name << " is " << h1.health << endl;
    // error because level is private
    //cout << "Level of " << h1.name << " is " << h1.level << endl;
   
    h1.print(); // calling the print function to display level
    return 0;
}