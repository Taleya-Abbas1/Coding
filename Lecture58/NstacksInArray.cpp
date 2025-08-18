#include<iostream>
using namespace std;

class NStacks{
  public :

   int *arr ;
   int *top ;
   int *next ;

   int n , s ;
   int freeSpot ;
   NStacks(int N , int S)
   {
      n = N ;
      s = S ;
      arr = new int[s];
      top = new int[n];
      next = new int[s];
      freeSpot = 0;

      // update top array with -1 
      for(int i = 0 ; i< n ; i++)
      {
        top[i] = -1 ;
      }
      // update next array
       for(int i = 0 ; i< s ; i++)
       {
        next[i] = i+1;
       }
       //update last next index 
       next[s-1] = -1 ;
   }
   bool push(int x , int m )
   {
     if(freeSpot == -1)
     {
       return false; // Stack overflow
     }

     // update index 
     int index = freeSpot ;
     // update freeSpot
     freeSpot = next[index];
     // insert
     arr[index] = x ;
     // update next 
     next[index] = top[m-1];
     // update top
     top[m-1] = index;

     return true;

   }
   int pop(int m)
   {
       if(top[m-1] == -1)
       {
        return - 1 ; // underflow(top is empty )
       }
         int index = top[m-1];
         top[m-1] = next[index];
         next[index] = freeSpot;
         freeSpot = index;
         return arr[index];
   }
};

int main()
{
    NStacks nStacks(3, 10);
    nStacks.push(5, 1);
    nStacks.push(10, 2);
    nStacks.push(15, 3);
    cout << "Popped from stack 1: " << nStacks.pop(1) << endl; // Should print 5
    cout << "Popped from stack 2: " << nStacks.pop(2) << endl; // Should print 10
    cout << "Popped from stack 3: " << nStacks.pop(3) << endl; // Should print 15
    cout << "Popped from stack 1 again: " << nStacks.pop(1) << endl; // Should print -1 (underflow)
    
    return 0;

}