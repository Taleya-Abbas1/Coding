#include<iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
  // constructor concept for static allocation

  
    Hero h(10) ; // object creation
    cout << " Added Hero class object h ->" << &h << endl;
// Constructor concept for dynamic  allocation
    Hero *he = new Hero(20) ;
    cout << " Added Hero class object h ->" << he << endl;
    // dono cases mai default constructor call hoga
    cout << "Health of " << h.name << " is " << h.health << endl;
    cout << "Health of " << he->name << " is " << he->health << endl;

    Hero temp(103,'D');
    cout << "Health of temp is " << temp.health << endl;
    cout << "Level of temp is " << temp.getLevel() << endl;




    /*
    Hero h1; // object creation
    // use the getter to access the private level
    cout << "Level of " << h1.name << " is " << h1.getLevel() << endl;
    h1.setLevel('B'); // modifying level using setter
    cout << "Updated Level of " << h1.name << " is " << h1.getLevel() << endl;






    // static Allocation 
    Hero h2; 
    h2.health = 20; // modifying health
    
  cout << "Static Allocation --->" << endl ;
  cout << " health : " << h2.health << endl;
  cout << " level : " << h2.getLevel() << endl;

    // we can also use dynamic allocation
    Hero* h3 = new Hero; // dynamic allocation
    h3->health = 30; // modifying health
    h3->setLevel('C'); // modifying level using setter
    cout << "Dynamic Allocation --->" << endl ;
  cout << " health : " << (*h3).health << endl;
  cout << " level : " << (h3->getLevel()) << endl;
  */
}