#include<iostream>
using namespace std;
//Return by reference
int& updateFunc(int a)
{
    int num = a ;
    int& ans  = num; // This will cause an error because num is a local variable
    return ans; // Returning a reference to a local variable is undefined behavior
}
void update(int& n)
{
    n++;
}
int main()
{
    int i = 5 ;
    int &j = i; 
    cout << "Value of i: " << i << endl; 
    i++;
    cout << "Value of j: " << i << endl; 
    j++;
    cout << "Value of i: " << i << endl;
    cout << "Value of j: " << j << endl; 

    int n = 5 ;
    cout << "Before update: " << n << endl; 
    update(n);
    cout << "After update: " << n << endl; 


   updateFunc(n);
 




}