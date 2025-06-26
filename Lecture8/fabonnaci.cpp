#include<iostream>
using namespace std;
int fabonaccci(int n)
{

    int a  = 0 ;
    int b= 1 ;
    int sum ;
    int index = 2 ;
    while(sum!=n)
    {
        sum = a + b;
        a = b ;
        b = sum ; 
        index++ ;
        if( n == 1)
        {
            cout << "Index is : 2"<< endl ;
        }
        if(n == 0 )
        {
            index  = 1 ;
            break  ;
        }
        
        if(sum > n)
        {
            index = 0 ;
            break ;
        }
    }
    return index ;
}

int main()
{
       int n ;
       cout << "Enter the number for which index is requried in fabonacci :" << endl ;
       cin >> n ;
       int index = fabonaccci(n);
       if(index>0)
       {
        cout << "Index is :" << index << endl ;
       }
       else
       {
          cout << "The number is not related to fabonaciii. Try 1 ,2 ,3 , 5 ,8,13,21,34 ..... " << endl;
       }
     
}