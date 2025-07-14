//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n];
int pSum=0,sSum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>a[i][j];
    if(i==j)pSum+=a[i][j];
    if(i+j==n-1) sSum+=a[i][j];
}
}
cout<<abs(pSum-sSum);

}
