#include<iostream>
using namespace std;

#define PI 3.14
//code mai jahan jahn macro use hoga wahan pehle PI ki jagah 3.14 replace ho jayega complie time par
//PI can be change in code like PI = PI + 1; // this will not work as PI is a macro, not a variable and does not have a memory location
int main()
{
    int r = 5 ;
    double area = PI * r * r;
    cout << "Area of circle : "  << area << endl;
}