#include<iostream>
using namespace std;
int CalculateSetBits(int m)
{
    int count =  0;
    while(m!=0)
    {
    int bit = m&1 ;
    if(bit ==1)
    {
        count++;
    }
    m = m >> 1 ;
   }
    return count ;
}

int main()
{
    int a ,  b;
    cout << "Enter a and b :" ;
    cin >> a >> b ;
    int count1 = CalculateSetBits(a);
    int count2 = CalculateSetBits(b);
    int final = count1 +count2 ;
    cout << "Final answer is :" << final <<endl ;
}