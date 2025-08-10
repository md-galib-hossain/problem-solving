#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector <string> ans(n);
        priority_queue<pair<int,int>> pq;
for(int i =0;i<n;i++){
    pq.push(make_pair(score[i],i));

}
ans[pq.top().second] = "Gold Medal";
pq.pop();
if(pq.size()){
ans[pq.top().second] = "Silver Medal";
pq.pop();
}
if(pq.size()){
    ans[pq.top().second] = "Bronze Medal";
pq.pop();
}
int rank =4;
while(pq.size()){
    ans[pq.top().second]= to_string(rank);
    pq.pop();
    rank++;
}
return ans;

    }
};