#include<iostream>
using namespace std;
int main()
{
    int x ;
    cout << "Enter an integer: ";
    cin >> x ;
    int i = 0 ; 
  int answer = 0 ;
    if(x > - 2147483648 && x < 2147483647)
    {
    
    // if(x < 0 )
    // {
    //     cout << "-";
    //     x = -x; 
    // }
    while(x!=0)
    {
        int digit = x% 10 ;
        answer = answer * 10 + digit;
       // cout << digit;
        x= x/10 ;
        i++;
    }
}
  else
    {
        cout << "The integer is out of the range of a 32-bit signed integer." << endl;
        return 0; 
    }
    cout << "Reversed integer: " << answer << endl;
    
//Another formula you can use :
// answer = answer * 10 + digit;
}