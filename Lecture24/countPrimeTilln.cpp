#include<iostream>
//#include <vector>
using namespace std;
int countPrime(int n)
{
    int count = 0;
    if (n < 2) 
    {
        return count;
     } 
     //vector<bool> isPrime(n+1, true);
    //isPrime[0] = isPrime[1] = false; // 0
    bool isPrime[n+1]= {0}; 
    
    isPrime[0] = isPrime[1] = true;    
    for(int i = 2; i < n ; i++)
    {
        if(!isPrime[i])
        {
            count++; 
           
        }
        
            for(int j = i * 2; j < n; j += i)
            {
                isPrime[j] = true;
            }
        
    }
    return count ;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int result = countPrime(n);
    cout    << "Result is: " << result << endl;
    return 0;
}