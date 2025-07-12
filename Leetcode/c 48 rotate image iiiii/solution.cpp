class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//0,0 -> 0,2
//1,0 -> 0,1
//2,0 -> 0,0

//0,1 -> 1,2
//1,1 -> 1,1
//2,1 -> 1,0
int m=matrix.size();
int n=matrix[0].size();
vector<vector<int>> result(n, vector<int>(m));
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        result[j][n-i-1]=matrix[i][j];
    }
}
matrix=result;

    }
};