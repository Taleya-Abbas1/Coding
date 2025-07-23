#include<iostream>
using namespace std;
// This is one solution through which we can share varaiables between functions
// by passing the variable by reference(Best practice)

int score = 25 ;
void b(int& i)
{
      cout << "Score in b: " << score << endl;
   cout << "Value of i in b: " << i << endl;
}
void a(int& i)
{
    cout << "Score in a: " << score << endl;
    cout << "Value of i: " << i << endl;
     b(i);
}


int main()
{
    int i = 5 ;
    a(i);
    
    cout << "Final score in main: " << score << endl;
    return 0;

}