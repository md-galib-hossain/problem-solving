#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool check(string s, string t) {
    if (s.length() != t.length()) return false; 

    unordered_map<char,char> myMap;
    unordered_set<char> used; 

    for (int i = 0; i < s.length(); i++) {
        char a = s[i], b = t[i];

        if (myMap.find(a) == myMap.end()) {
            if (used.count(b)) return false;

            myMap[a] = b;
            used.insert(b);
        } else {
            if (myMap[a] != b) return false;
        }
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    bool b = check(s, t);
    cout << (b ? "true" : "false") << endl;

    return 0; 
}
