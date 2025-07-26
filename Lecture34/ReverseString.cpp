#include<iostream>
using namespace std ;

// using one pointer
void reverseString(int i,string &s)
 {
   
     // base case
        if (s.empty())
        {
            return;
        }
     if( i<= s.length()/2)
     {
         return;
     }
     {
         return;
     }
     swap(s[i], s[s.length()-1-i]);

     // recursive call
    return reverseString(i+1, s);
}
// void reverseString(int e , int start,string &s)
// {
   
//      // base case
//         if (s.empty())
//         {
//             return;
//         }
//      if( start >= e)
//      {
//          return;
//      }
//      swap(s[start], s[e]);
    
//      // recursive call
//     return reverseString(e-1, start+1, s);
// }
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    reverseString(0, s);
    cout << "Reversed string: " << s << endl;
    return 0;
}