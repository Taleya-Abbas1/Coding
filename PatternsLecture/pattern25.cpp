#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
           int count = 1;
        // print the first triangle
        for(int k = 1 ; k <= n-i+1 ;k++)
        {
            cout << count;
            count++;
        }
      // print first star  pattern 
        int star = i - 1;
        while(star)
        { 
           cout << "*";
           star--;
        }
      // print second star pattern 
         int star2 = i - 1;
        while(star2)
        { 
           cout << "*";
           star2--;
        }
        
      

        // print the second triangle

        int var = n-i+1;
        for(int j = 1 ; j<=n-i+1; j++)
        {
          cout << var ;
          var--;
        }
cout << endl;



    }
    return 0;
} 




