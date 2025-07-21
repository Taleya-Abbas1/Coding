#include<iostream>
using namespace std;
int main()
{
    float weight ;
    string Name ;
    cout <<"Enter the name of the Person ;" <<endl ;
    cin>>Name ;
    cout <<"Enter the target weight in kilograms to lose : "<<endl ;
    cin >>weight ;
    float days = weight *15 ;
    cout << Name <<" needs " << days <<" days to lose " <<weight << " kg weight according to doctor's suggestions " << endl ; 
}