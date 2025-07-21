#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of sides of polygon :";
    cin >> n;
    float angle =  180*(n-1) ;
    cout <<"The measure of internal angle of"<< n <<"  sided polygon is :"<< angle <<endl ;                           
}