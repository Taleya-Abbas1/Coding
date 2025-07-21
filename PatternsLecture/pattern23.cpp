#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1 ;
    for (int i = 1; i <= n; i++)
    {
       
        int space = n - i;
        while(space)
        { 
           cout << " ";
           space--;
        }
      
        for(int k = 1 ; k <= i ;k++)
        {
            cout << count;
            count++;
        }
        
        cout << endl;
    }
    return 0;
} 




