// https://leetcode.com/problems/set-matrix-zeroes/submissions/1735782557/
#include <bits/stdc++.h>
#include "../array_utils.hpp"
using namespace std;
#define endl '\n'
//time
//Best case: O(m × n)
//Worst case: O(m × n × (m + n))
//space
//O(m × n)
// int main() {
//     vector<vector<int>> matrix;
//     int m, n;
//     cin >> m >> n;
//     matrix.resize(m, vector<int>(n));
    
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             cin >> matrix[i][j];

//     vector<pair<int, int>> vp;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (matrix[i][j] == 0) {
//                 vp.push_back({i, j});
//             }
//         }
//     }

//     for (auto &pos : vp) {
//         int r = pos.first;
//         int c = pos.second;
//         for (int j = 0; j < n; j++)
//             matrix[r][j] = 0;
//         for (int i = 0; i < m; i++)
//             matrix[i][c] = 0;
//     }

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++)
//             cout << matrix[i][j] << " ";
//         cout << endl;
//     }

//     return 0;
// }

//Time Complexity: O(m × n)
//Space Complexity: O(1) extra space
void setZeroes(vector<vector<int>> &matrix){
    int row, col;
    row=matrix.size();
    col=matrix[0].size();
 bool isRowZero=false, isColZero=false;


for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        if(matrix[i][0]==0){
            isColZero=true;
        }
        if(matrix[0][j]==0){
            isRowZero=true;
        }
    }
}


for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        if(matrix[i][j]==0){
            matrix[i][0]=0;
            matrix[0][j]=0;
        }
    }
}

for(int i=1;i<row;i++){
    for(int j=1;j<col;j++){

        if(matrix[i][0] ==0) matrix[i][j]=0;
        if(matrix[0][j]==0)matrix[i][j]=0;
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        if(isRowZero){
            matrix[0][j]=0;
        }
        if(isColZero){
            matrix[i][0]=0;
        }
        
    }
}


}
int main(){
    int m,n;
    cin>>m>>n;
vector<vector<int>> matrix(m, vector<int>(n));
   for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

   setZeroes(matrix);
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        cout<< matrix[i][j]<<" ";
    }
    cout<<endl;
}

}

// 3 4
// 1 1 2 0
// 3 4 5 2
// 1 3 1 5

