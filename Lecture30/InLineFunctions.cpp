#include<iostream>
using namespace std;

inline int getMax(int &a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 1 ;
    int b = 2 ;
    int ans =  0 ;
    // if(a < b)
    // {
    //     ans = a;
    // }
    // else 
    // {
    //     ans = b;
    // }
   // in tertary operator, we can write the above code in one line
      //return (a > b) ? a : b;
   ans = getMax(a, b);
   cout << ans << endl ;
   // agay hamy  a b ko update krna
   a = a+2;
    b = b+3;

    //ab hamy bar bar esy call krna par raha hai or stack mai bar bar read ho rahi hai ye call
   //ans =  (a > b) ? a : b;
   
   // ab masla ye hai ky function mai a or b ki copy ban rae hai tu ham by reference bhejy gay


   //..... lakin abhi bhi function call tu stack mai jaa rhe hai ... es storage ka masla inline function through ab kar sakte k jis function k sth inline hoga
   //means k wo function ka part code mai jahan jahan call hua complie time mai wo replace ho jaye ga jesy macro mai hota or storage problem or func
   // call  problem solved .....
    ans = getMax(a, b);
    cout << ans << endl ;
}