#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n;
    cin >> n ;
    
vector<vector<int>> dominoes(n, vector<int>(2));
 for (int i = 0; i < n; i++) {
    cin >> dominoes[i][0] >> dominoes[i][1];
}


map<pair<int,int>,int> cnt;
for(auto domino : dominoes){
 pair<int,int> d = make_pair(domino[0],domino[1]);

 if(d.first>d.second){
    swap(d.first,d.second);
 }
 cnt[d]++;

}
int ans=0;
for(auto data: cnt){
    ans+=data.second*(data.second-1)/2;
}

cout<<ans;
    return 0;
}