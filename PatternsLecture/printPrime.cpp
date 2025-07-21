#include<iostream>
using namespace std ;
int main()
{

     int n ;
     cout <<"Enter the number :";
     cin >> n;
    cout << "-------------------------"<<endl;
    cout<< "      PRIME NUMBERS"<<endl;
    cout << "-------------------------"<<endl;
    if(n>=2)
    {
        cout << "2" ;
    }
    else
    {
        cout << "Invalid input. Prime number begins with 2! ";
    }
    int i = 3 ;
    while(i <= n)
    {
      int j = 2 ;
      bool isPrime = true;
      while(j < i )
      {
       
        if(i%j == 0)
        {
             isPrime = false;
             break;
        }
         j++;
      }
      if(isPrime)
      {
          cout  << " ,"<< i;
      } 

      i++; 
    }
 

}




