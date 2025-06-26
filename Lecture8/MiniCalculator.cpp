#include<iostream>
using namespace std;
int main()
{
    int a , b;
    char op ;
    cout << "Enter number 1:";
    cin >> a ;
    cout << "Enter number 2:";
    cin >> b ;
    cout << "Enter the operation(+,-,*,%) :" ;
    cin >> op ;
    switch(op)
    {
        case '+' :
                 cout << "Sum is :" << a+ b<< endl ;
                break ;
         case '-' :
                 cout << "Subtraction is :" << a - b<< endl ;
                break ;
         case '*' :
                 cout << "Multiplication is :" << a * b<< endl ;
                break ; 
        case '/' :
                 if(b>0)
                 {
                    cout << "Division is:" << a/b << endl ;
                 }       
                 break ;
        case '%' :
                 cout << " mode is :" << a%b << endl ;
                 break ;
                 
         default :
                 cout << "No valid operation ."<< endl ;
                 break ;        
            
            
            
            
    }
    
}