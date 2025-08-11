#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// optimized one to avoid calculation for same value
class Solution {
public:
    int fib(int n) {
       vector <int> memo(n+1,-1);
      return fibMemo(n,memo);

    }

    int fibMemo(int n,vector<int> &memo){

if(n == 1 || n == 0) return n;
if(memo[n] != -1) return memo[n];
return memo[n] = fibMemo(n-1,memo)+fibMemo(n-2,memo);

    }
};

//old one
int fib(int n) {
    if (n == 0) return 0; // base case 1
    if (n == 1) return 1; // base case 2
    return fib(n - 1) + fib(n - 2); // recursion
}
