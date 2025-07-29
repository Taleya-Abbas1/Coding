#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSafe(vector<vector<int>> &m,int newx , int newy , vector<vector<int>>&  visited,int n)
{
    if((newx >=0 && newx<=n-1)&& (newy>=0 && newy<= n-1) && m[newx][newy] ==1 &&   visited[newx][newy] == 0 )
    {
        return true ;
    }
    else
    {
        return false;
    }
}

void SolveMaze(int n ,vector<vector<int>> &m,  vector<string>& ans,int x , int y , vector<vector<int>>  visited, string path)
{
    // base case
    if( x == n -1 && y == n - 1)
    {
       ans.push_back(path);
        return ;
    }

    visited[x][y] = 1; // mark the cell as visited
    
    int newx = x+1 ; // down
    int newy = y;
    if(isSafe(m,newx,newy,visited,n))
    {
        path.push_back('D');
        SolveMaze(n,m,ans,newx,newy,visited,path);
        path.pop_back(); // backtrack

    }

    // up
     newx = x-1 ; 
     newy = y;
    if(isSafe(m,newx,newy,visited,n))
    {
        path.push_back('U');
        SolveMaze(n,m,ans,newx,newy,visited,path);
        path.pop_back(); // backtrack

    }
    // right
    newx = x;
    newy = y+1;
    if(isSafe(m,newx,newy,visited,n))
    {
        path.push_back('R');
        SolveMaze(n,m,ans,newx,newy,visited,path);
        path.pop_back(); // backtrack

    }
    // left
   newx = x;
    newy = y-1;
    if(isSafe(m,newx,newy,visited,n))
    {
        path.push_back('L');
        SolveMaze(n,m,ans,newx,newy,visited,path);
        path.pop_back(); // backtrack

    }


    visited[x][y] = 0; // backtrack
}

vector<string> ratInMaze(int n ,vector<vector<int>> &m)
{
    vector<string> ans;
    string path = "";
    int srcx = 0 ;
    int srcy = 0 ;
     vector<vector<int>>  visited = m;

     for(int i = 0; i < n; i++)
     {
       for(int j = 0; j < n; j++)
       {
           visited[i][j] = 0;
       }
     }
    SolveMaze(n, m, ans, srcx, srcy, visited, path);
     sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int n = 4;
   
    vector<vector<int>> m ={
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    vector<string> result = ratInMaze(n, m);
    cout << "Paths from source to destination are:" << endl;
    if (result.empty()) {
        cout << "No path exists." << endl;
        return 0;
    }
    
    for (const auto& path : result) {
        cout << path << endl;
    }

    return 0;
    

}
