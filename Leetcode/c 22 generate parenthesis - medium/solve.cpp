#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Solution {
public:
void solve(int n,string &cur, int opening, int closing, vector<string> &ans)
{
    if(cur.length() == 2*n)
    {
        ans.push_back(cur);
        return;
    }
    if(opening < n)
    {
        cur.push_back('(');
        solve(n,cur,opening+1,closing,ans);
        cur.pop_back();
    }
    if(closing < opening)
    {
        cur.push_back(')');
        solve(n,cur,opening,closing+1,ans);
        cur.pop_back();
    }

}
};

int main()
{
    int n = 3;
    vector<string> ans;
    Solution sol;
    string cur = "";
    sol.solve(n,cur,0,0,ans);
    for(auto &s : ans)
    {
        cout << s << endl;
    }
    return 0;
}

// TIME COMPLEXITY: O(4^n/sqrt(n)) --- CATALAN NUMBER ---
// SPACE COMPLEXITY: O(n) RECURSION STACK