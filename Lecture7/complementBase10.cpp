#include<iostream>
using namespace std ;
int main()
{
    int x;
    cout << "Enter the integer :";
    cin >> x ;
    int power = 1 ;
    int answer = 0 ;
    while(x >0 )
    {
     int digit = x % 2 ;
     answer = digit * power + answer;
     x = x/2 ;
     power *= 10 ;

    }
    cout << "Binary representation : " << answer << endl ;
    // complementing
    answer = ~(answer);
    cout << "Complement is: " << answer ;

}