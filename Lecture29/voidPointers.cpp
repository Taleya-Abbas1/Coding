#include<iostream>
using namespace std;
void PrintValue(void* p , char type)
{
    if(type == 'i')
    {
       cout << *(int*)p << endl ;
    }
    if(type == 'c')
    {
       cout << *(char*)p << endl ;
    }
}
int main()
{
    char ch = 'A';
    void* p = &ch ;
    //deferencing 
    //cout << *p << endl ; // thdis will give error because void pointer cannot be dereferenced directly
    cout << *(char*)p << endl ; // value

    // in c++ void pointer are used for generaric functionality 
    int x = 10;
    void* p1 = &x ;
    PrintValue(p1, 'i'); // passing the pointer and type of data
    char y = 'a';
    void* p2 = &y ;
    PrintValue(p2, 'c'); // passing the pointer and type of data


    //drawbacks 
    //1.deferencing is not possible directly
    //2. cannot perform arithmetic operations on void pointers like p++ 
}