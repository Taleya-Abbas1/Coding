#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number till where you want table from celcius to farenhiet :";
    cin >> n ; 
    cout <<" Celcius to Farenhiet Table "<<endl;
    cout << "------------------------------"<<endl;
    cout << "Celcius(`C)      ||   Farenhiet(F)"<<endl;
    cout << "------------------------------"<< endl ;
    
    int i = 0;
     while ( i <= n )  
    {
    float temp = ((9/5)*i)+32;
       
        cout << i<< "                  ||" << temp <<endl;   
        i++ ;
    }
     



}