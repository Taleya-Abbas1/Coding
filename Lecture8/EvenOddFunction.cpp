#include<iostream>
using namespace std;

bool IsEvenOrOdd(int num)
{
    if(num%2 ==0 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}



int main()
{
    int a ;
    cout  << "Enter the number to check :" ;
    cin>> a ;
    bool flag = IsEvenOrOdd(a);
    if(flag)
    {
        cout << "The number is Even ."<< endl ;
    }
    else
    {
        cout <<"The number is Odd ."<<endl ;
    }
}