#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// 1. Naive Recursion | Time: O(2^n), Space: O(n)
int fibRec(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRec(n-1) + fibRec(n-2);
}

// 2. Top-Down DP (Memoization) | Time: O(n), Space: O(n)
class SolutionMemo {
public:
    int fib(int n) {
        vector<int> memo(n+1, -1);
        return fibMemo(n, memo);
    }
    int fibMemo(int n, vector<int> &memo) {
        if (n == 0 || n == 1) return n;
        if (memo[n] != -1) return memo[n];
        return memo[n] = fibMemo(n-1, memo) + fibMemo(n-2, memo);
    }
};

// 3. Bottom-Up DP (Tabulation) | Time: O(n), Space: O(n)
int fibTab(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// 4. Bottom-Up Optimized (Iterative with 2 vars) | Time: O(n), Space: O(1)
int fibOpt(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int prev2 = 0, prev1 = 1, curr;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main() {
    int n = 10;
    cout << "Naive Recursion: " << fibRec(n) << endl;
    SolutionMemo sol;
    cout << "Memoization: " << sol.fib(n) << endl;
    cout << "Tabulation: " << fibTab(n) << endl;
    cout << "Optimized Iterative: " << fibOpt(n) << endl;
}
