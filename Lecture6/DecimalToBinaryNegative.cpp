#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the negative number :";
   cin >> n ;
   int  num = -n ;
   int i = 0 ;
   int answer = 0 ;
   int j  ;
   int power = 1 ;
   int remainder;
   while (num>0)
   {
      remainder = num%2 ;
      j = 1 ;
      while(j<=i)
      {
        power *= 10 ;
        j++;
        
      }
     answer = remainder * power+ answer ;
     num = num/2 ; 
     i++;
     power = 1 ;

   }
    cout << "The binary representation of number without negative sign is: " << answer << endl;

    string result =to_string(answer) ;
    for(int i = 0  ; i < result.length(); i++)
    {
       if(result[i] == '0')
       {
           result[i] = '1';
       }
       else
       {
           result[i] = '0';
       }
    }
    cout << "inverted answer is: " << result << endl;
    result +=  1;
    cout << "2's complement of the number is: " << result << endl;

    //Now to display the final result in binary format
    string finalResult ;
    finalResult = result;
    for(int i = 0 ; i < finalResult.length() ;i++)
    {
        if(finalResult[i] == '0')
        {
            finalResult[i] = '1';
        }
        else
        {
            finalResult[i] = '0';
        }
    }
    cout << "Inverted final result is: " << finalResult << endl;
    finalResult += 1 ;
    cout << "Final result in binary format is: " << finalResult << endl;



}