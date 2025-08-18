#include<iostream>
#include<queue>
using namespace std ;
struct PetrolPump
{
    int petrol ;
    int distance ;
};  
int tour(PetrolPump p[] , int n)
{
    int start = 0 ;
    int balance = 0 ;
    int deficient = 0 ;
    for(int i = 0 ; i< n ; i++)
    {
        balance += p[i].petrol - p[i].distance;
        if(balance <0)
        {
            deficient += balance ;
            start = i+1;
            balance = 0;
        }
    }
    if(balance + deficient >=0)
    {
        return start ;
    }
    else 
    return -1;
}
int main()
{
    int n ;
    cout << "Enter number of petrol pumps: ";
    cin >> n ;

    PetrolPump pumps[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter petrol and distance for pump " << i + 1 << ": ";
        cin >> pumps[i].petrol >> pumps[i].distance;
    }
   int start = tour(pumps,n);
   cout << "The starting petrol pump is: " << start << endl;
    return 0;
}