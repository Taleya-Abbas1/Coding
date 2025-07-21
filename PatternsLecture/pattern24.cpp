#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
       //first print space 
        int space = n - i;
        while(space)
        { 
           cout << " ";
           space--;
        }
        int count = 1;
        // print the first triangle
        for(int k = 1 ; k <= i ;k++)
        {
            cout << count;
            count++;
        }
        
        

        // print the second triangle

        int var = i -1;
        for(int j = 1 ; j<=i-1 ; j++)
        {
          cout << var ;
          var--;
        }
cout << endl;



    }
    return 0;
} 




