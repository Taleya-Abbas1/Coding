#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             char ch = 65 + i - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
} 