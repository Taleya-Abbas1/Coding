#include<iostream>
using namespace std;
int main()
{
   int Amount ;
   cout << "Enter the Amount :" ;
   cin >> Amount ;
  
   switch(1)
   {
    case 1 :
        
          cout <<  Amount /100  << "  100 notes ."<< endl ;
          Amount = Amount % 100 ;
    case 2:
        
          cout << Amount /50<< "   50 notes ."<< endl ;
          Amount = Amount % 50 ;
    case 3 :
           
          cout <<   Amount /20  << "   20 notes ."<< endl ;
          Amount = Amount % 20 ;
    case 4:
            
          cout << Amount /1 << "  100 notes ."<< endl ;
          Amount = Amount % 1 ;
          break ;
    default:
      cout << "No amount found"<< endl ;

   }
}