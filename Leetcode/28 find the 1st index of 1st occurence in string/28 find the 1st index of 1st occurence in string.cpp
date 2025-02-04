#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length(), m = needle.length();

    if (m > n) return -1; // If needle is longer than haystack, return -1

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) return i; // Found the full needle
    }
    return -1; // Not found
}

int strStr(string haystack, string needle) {
    int n = haystack.length(), m = needle.length();

    if (m > n) return -1; // If needle is longer than haystack, return -1

    for (int i = 0; i <= n - m; i++) {
        if (haystack.substr(i, m) == needle) { // Compare substring with needle
            return i;
        }
    }
    return -1;
}

int main() {
    string haystack = "mississippi", needle = "issip";
    cout << strStr(haystack, needle) << endl;
    return 0;
}
