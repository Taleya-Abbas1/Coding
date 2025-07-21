#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
       
        int space = i - 1;
        while(space)
        { 
           cout << " ";
           space--;
        }
        
        for(int k = 1 ; k <= n-i+1 ;k++)
        {
            cout << "*" ;

        }
        
        cout << endl;
    }
    return 0;
} 




