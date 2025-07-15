#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};

int main()
{
    int n, m;
    cin >> n >> m;
    char a[100][100]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--; 
    y--;

    bool allX = true; 
    for (int i = 0; i < 8; i++)
    {
        int ni = x + dx[i];
        int nj = y + dy[i];
        if (isValid(ni, nj, n, m)) 
        {
            if (a[ni][nj] != 'x') 
            {
                allX = false;
                break; 
            }
        }
    }

    cout << (allX ? "yes" : "no") << endl;
    return 0;
}