#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        char count = n -  i ;
        
        for (int j = 1; j <= i; j++)
        {
            char ch = 65 + count ;
            count++;
             cout << ch;
        }
        
        cout << endl;
    }
    return 0;
} 




