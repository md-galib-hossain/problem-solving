//https://leetcode.com/problems/last-stone-weight/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        for( int x : stones){
            pq.push(x);
        }

         while(pq.size()>1){
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
if(s1>s2)pq.push(s1-s2);

         }

         if(pq.size()==0) return 0;
         return pq.top();
    }
};