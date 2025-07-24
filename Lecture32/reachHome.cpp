#include<iostream>
using namespace std;
void reachHome(int des , int src)
{
    // base case
    cout << "src: " << src << " des: " << des << endl;
    if(src == des)
    {
        cout << " pohnch gaya ghar" << endl;
        return ;

    }
    // processing
    src++;
    // recursive call
    reachHome(des, src);
}
int main()
{
    int des  = 10 ;
    int src = 1;
    reachHome(des, src);
    return 0;
}