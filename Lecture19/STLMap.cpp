#include<iostream>
using namespace std;
#include<map>
int main()
{
  map<int,string> m ;
m[1] ="love";
m[2] ="coding";
m[13] ="true";
// secomd way to inser elements
m.insert({4,"hello"});


//i.first key ko  print krta hai

//i.second value ko print krta hai


for(auto i : m)
{
    cout << i.first <<" "<<i.second << endl; 
}


cout <<"Finding 13-> " << m.count(13) << endl; // Checking if key 13 is present in the map


cout <<"Before erase size of map -> " << m.size() << endl; // Printing the size of the map before erasing an element
cout <<"Print b4 erase -> " << endl; // Printing the map before erasing an element
for(auto i : m)
{
    cout << i.first <<" "<<i.second << endl; 
}
cout << endl;
m.erase(13); // Erasing the element with key 13 from the map
cout <<"After erase size of map -> " << m.size() << endl; // Printing the size of the map after erasing an element
cout <<"Print after erase -> " << endl; // Printing the map before erasing an element
for(auto i : m)
{
    cout << i.first <<" "<<i.second << endl; 
}
cout << endl ;
  auto it = m.find(1); // Finding the iterator for the key 1
  for(auto i = it; i != m.end(); i++) // Iterating from the found iterator to the end of the map
  {
      cout << (*i).first << " " << (*i).second << endl; // Printing the key and value of each element from the found iterator to the end
  }
}