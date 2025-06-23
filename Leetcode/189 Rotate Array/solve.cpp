#include <bits/stdc++.h>
#define endl '\n'
#include "../array_utils.hpp"
using namespace std;

void solve()

{

int n,k;cin>>n>>k;
int arr[n];
inputArray(arr,n);
//1,2,3,4,5
int ans[n];
for(int i=0;i<n;i++){
int realIndex=(i+n-k)%n;
ans[realIndex]=arr[i];

}


printArray(ans,n);
}
int main()
{

    solve();
    return 0;
}