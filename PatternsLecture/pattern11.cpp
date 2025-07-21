#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n ; i++)
    {
      
        int count = i;
        for (int j = 1; j <= i; j++)
        {
            //  ch = (65 +i) + j - 2;
            //  cout << ch;
           char ch = 65 ;
         
            cout << ch;
            
        }
        
        cout << endl;
    }
    return 0;
} 
