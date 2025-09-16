#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(vector<vector<int>> &grid, int r, int c, int color, int originalColor) {
    int m = grid.size();
    int n = grid[0].size();

    // Check bounds and whether the cell is the original color
    if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] != originalColor)
        return;

    grid[r][c] = color; // Fill the cell with new color

    for (int i = 0; i < 4; i++) {
        int nx = r + dx[i];
        int ny = c + dy[i];
        dfs(grid, nx, ny, color, originalColor); // Recurse
    }
}

int main() {
    int m, n;
    cin >> m >> n;  

    vector<vector<int>> image(m, vector<int>(n));  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> image[i][j];  
        }
    }

    int sr = 1, sc = 1, color = 2;
    int originalColor = image[sr][sc];

    if (originalColor != color) // avoid infinite loop if new color is same
        dfs(image, sr, sc, color, originalColor);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;  
    }

    return 0;
}
