#include<iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
    // Hero h(28,'Y');
    // h.print();
    // Hero h2(h);
    // h2.print();

  // cout << "shallow copy -----" << endl << endl ;
    Hero h1 ;
    h1.setHealth(100);
    h1.setLevel('B');
    char name[7] = "Batman";
    h1.setName(name);
  
 //   h1.print();

    //using defaut copy constructor  
    Hero h2(h1); // Copy constructor
    h2.print();

    h1.name[0]= 'C';

    h1.print();

    // h2.print();

    // default constructor gives shalow copy
//    cout << "deep copy " << endl << endl ;

//    h2.print();

//     h1.name[0]= 'C';

//     h1.print();

//     h2.print();

//    cout <<"h1 ->"<< h1.name << endl ;
//    cout << "h2->" <<h2.name <<endl;


//  copy assignment operator
   h1 = h2 ;
    cout << "After copy assignment operator" << endl;
    h1.print();
    h2.print();
    h1.name[0] = 'D';
    cout << "After modifying h1 name" << endl;  // same change will reflect in h2
    h1.print();
    h2.print();

}