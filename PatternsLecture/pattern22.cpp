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
        int count = i ;
        for(int k = 1 ; k <= n-i+1 ;k++)
        {
            cout << count;
            count++;
        }
        
        cout << endl;
    }
    return 0;
} 




