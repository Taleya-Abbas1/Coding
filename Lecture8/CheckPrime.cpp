#include<iostream>
using namespace std;

bool CheckPrime(int n)
{
    for(int i = 2; i <n ;i++)
    {
       if(n%i ==0)
       {
          return 0 ;
       }
      
        
       
    }
     return 1;
    
}

int main()
{
 int n ;
 cout <<"Enter number : " ;
 cin >> n;
 bool result = CheckPrime(n);
 if(result)
 {
    cout << "It is a Prime number ."<< endl;
 }
 else
 {
    cout << "It is not a Prime number ." << endl;
 }
}