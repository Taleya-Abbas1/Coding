#include<iostream>
using namespace std;
int main(){
    char c = '1';
    int num = 1;
    switch (c)
    {
     case 1 : cout << " print 1";
               break ;
    case '1' : switch(num)
    {
       case 2 : cout << " han bhai 1 houn "<< endl ;
                 break;
       default : cout << "bhai 1 present nahi hai" << endl ;
    }
           break ;  
    default : cout << "print default";
                break ; 

    }
    
}