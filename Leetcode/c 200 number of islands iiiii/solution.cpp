#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]

void dfs(vector<vector<char>> &grid,vector<vector<bool>> &isVisited,int i, int j,int m, int n){
    if(i<0 || j<0 || i >=n || j>=m || grid[i][j] !='1' || isVisited[i][j]) return;
isVisited[i][j]=true;
dfs(grid,isVisited,i+1,j,m,n);
dfs(grid,isVisited,i,j-1,m,n);
dfs(grid,isVisited,i-1,j,m,n);
dfs(grid,isVisited,i,j+1,m,n);

}


int main()
{
//   int m,n;
//   cin>>m>>n;
int islands=0;
vector<vector<char>> grid= {
        {'1','1','1','1','0'},
        {'1','1','0','0','0'},
        {'1','1','0','1','0'},
        {'0','0','0','0','0'}
    };

    int n = grid.size();
    int m = grid[0].size();
    
vector<vector<bool>> isVisited(n,vector<bool>(m,false));


for(int i =0; i<n;i++){
    
    for(int j =0; j<m;j++){
        
        if(grid[i][j]=='1'&& !isVisited[i][j]){
    dfs(grid,isVisited,i,j,m,n);
    islands++;

}

    }
}
cout<<islands;

    return 0;
}