#include<iostream>
using namespace std;

char Tolower(char c){
 if( c>='A'&& c<='Z')
 {
    return c - 'A' + 'a';
 }
 else
 {
    return c ;
 }
}

bool Check(string s ,int i , int j )
{
   // base case 
   if(i > j)
   {
    return 1;
   }
   if(Tolower(s[i])== Tolower(s[j]))
   {
    return Check(s,i+1 , j-1 );
   }
   else
  {
    return 0 ;
  }
}
int main()
{
    string str = "";
    cout << "Enter a string: ";
    getline(cin, str);
    bool isPalindrome = Check(str , 0 , str.length()- 1);
    cout << "Check Palindrome :" << isPalindrome << endl ;

}