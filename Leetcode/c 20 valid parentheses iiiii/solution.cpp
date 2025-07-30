#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    string s;
    cin >> s;
    stack<int> st;
    for (char c : s)
    {

        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty()) {
                    return false; 
                }
            else if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }
    return st.empty();
    return 0;
}

