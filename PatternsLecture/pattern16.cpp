#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
       
        int count = n-i;
        while(count)
        { 
           cout << " ";
           count--;
        }
        for(int k = 1 ; k <= i ;k++)
        {
            cout << "*" ;

        }
        
        cout << endl;
    }
    return 0;
} 




