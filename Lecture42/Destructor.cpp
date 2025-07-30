#include<iostream>
#include "Hero.cpp"
using namespace std ;

int Hero::TimeToComplete = 5; // initializing static member variable


int main()
{
    // static 
    Hero a;
    //manually calling destructor for static allocation

    //Dynamic
    Hero *b = new Hero();
    //manually calling destructor for dynamic allocation
    delete b;


    //  print static member variable
    cout << "Time to complete: " << Hero::TimeToComplete << " hours" << endl;
    // Hero a ; cout << Hero::TimeToComplete << endl ;    --------aesy bh chal jaye ga but dependency ka issue hai beacuse it belongs to class , not to object



    // calling static function
    cout <<  Hero::random() << endl;
    return 0;
}
