#include<iostream>
using namespace std;
int main()
{
   float Cimposter , Cplayer;
   cout <<"Enter the count of imposter :"<<endl ;
   cin >> Cimposter ;
   cout << "Enter the count of player :" <<endl ;
   cin>> Cplayer ;
   float chance = 100*(Cimposter/Cplayer);
   cout <<"The chance for the imposter is :"<<chance <<" %"<<endl;
}