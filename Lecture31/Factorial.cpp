#include<iostream>
using namespace std;
// optimized

// int factorial(int n) {
//     if (n <= 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }


int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}
int main()
{
    int num ;
    cout << "Enter number :";
    cin >> num ;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
}