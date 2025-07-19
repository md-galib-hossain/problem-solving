#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{

    // 1 1 0
    // 1 0 1
    // 0 0 0
    int n;
    cin >> n;
    vector<vector<int>> image(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> image[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;
        while (left <= right)
        {

            swap(image[i][left], image[i][right]);
            image[i][left]= image[i][left] ^1;
          if(left != right){
              image[i][right]= image[i][right] ^1;
          }
// cout<<"Left: "<<image[i][left]<<endl;
// cout<<"Right: "<<image[i][right]<<endl;
            left++;
            right--;
        }

    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << image[i][j]<<" ";
        }
    cout<<endl;
    }

     
    return 0;
}