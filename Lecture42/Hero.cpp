#include <iostream>
#include <cstring>
using namespace std;
// es class mai level wala private or jo public k nechy waly hongy wo sab public honge
class Hero{
     // properties
    private:
     char level = 'A' ;
    public :
    //char name[100] = "paul";
    int health = 50;
     static int TimeToComplete ;
    char *name ;



    // default constructor
  Hero() {
        cout << "Default constructor" << endl ;
        name = new char[100]; 
    }
    // parameterized constructor
    Hero(int health) {
    cout << " this -> "<< this    << endl;
        this->health = health;
        cout << "Parameterized constructor with health: " << health << endl;
    }
    Hero(int health,char level) {
   
        this->health = health;
        this->level = level;
    }
   // copy constructor
    Hero( Hero &h) {
        this->health = h.health;
        this->level = h.level;
        this->name = new char[100];
        strcpy(this->name, h.name);
        cout << "Copy constructor called" << endl;
    }

    
   

    // getter and setter for level
    char getLevel() {
        return level;
    }
    void setLevel(char l) {
        level = l;
    }
    int getHealth()
    {
        return health ;
    }
    void setHealth(int health)
    {
        this->health = health ;
    }

   
    void setName(char name[]) {
        strcpy(this->name, name);
    }
     void print() {
        cout << "{";
        cout <<"level :" << level << " , ";
        cout <<"health :" << health << " , ";
        cout <<"name :" << this->name << "}" << endl;
        cout << endl << endl;
    }
    // Destructor
   ~Hero()
   {
    cout << "Destructor called :)" << endl ;
   }

   //static fuctions 
   static int random()
   {
    return TimeToComplete ;
   }

};