#include<iostream>
using namespace std;
int main()
{
   int int_velocity , time , acceleration ;
   cout << "Enter the initial velocity of the car :"<<endl ;
   cin >> int_velocity ;
   cout << "Enter the acceleration of the car :"<<endl ;
   cin >> time ;
   cout << "Enter the time of the car :"<<endl ;
   cin >> acceleration ;
   int final_velocity = (acceleration*time) + int_velocity ;
   cout << "The final velocity of the car is :"<< final_velocity; 
}