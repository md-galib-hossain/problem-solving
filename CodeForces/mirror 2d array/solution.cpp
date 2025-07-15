//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>a[i][j];
		
	}
}
for(int i=0;i<n;i++){
int x=0, y=m-1;
	while(x<y){
	swap(a[i][x],a[i][y]);
	x++;
	y--;
}
	
}

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<a[i][j]<<" ";
		
	}
	cout<<endl;
}

}
