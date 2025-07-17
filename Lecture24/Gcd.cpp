#include<iostream>
using namespace std;
int FindGcd(int a , int b)
{
    if( a== 0)
    {
        return b;
    }
    if( b== 0)
    {
        return a;
    }
    while(a!= b)
    {
        if(a > b)
        {
            a = a - b;
         } 
     else{
            b = b - a;
         }
       
    }
    return a;
  
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int value =FindGcd(a, b);
    cout << "GCD is: " << value << endl;   
    return 0;
}