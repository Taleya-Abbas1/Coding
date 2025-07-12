#include<iostream>
using namespace std;
int function(string str)
{
    int count =  1;
    int temp = str[0];
    int tempCount = count ;
    for(int i =0 ; i< str.length();i++)
    {
        for(int j = i+1;j< str.length();j++)
        {
            if(str[i] == str[j])
            {
                count++;
              
            }

        }
        if(count > tempCount)
        {
            tempCount = count;
            
            temp = str[i];
         
        }
        if(count == tempCount)
        {
            if(str[i] < temp)
            {
                temp = str[i];
            }
        }
        
        count = 1;
    }
    return temp;
    
}
int main()
{
    string input ;
    cout << "Enter a string: ";
    getline(cin, input); 
    int result = function(input);
    

    cout << "The most frequent character is: " << (char)result << endl;
    
}