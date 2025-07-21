#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        char count = i - 1;
        
        for (int j = 1; j <= n; j++)
        {
            char ch = 65 + count ;
             cout << ch;
             count++ ;
        }
        
        cout << endl;
    }
    return 0;
} 




