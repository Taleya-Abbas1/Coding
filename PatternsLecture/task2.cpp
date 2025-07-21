#include<iostream>
using namespace std;
int main()
{
    int min , sec;
    cout <<"Enter the number of minutes :"<< endl;
    cin >> min ;
    cout << "Enter frames per second :"<<endl ;
    cin >> sec;
    int Total_frames = min *sec*60 ;
    cout << "Total number of frames per seconds  :"<<Total_frames<<endl ;
}