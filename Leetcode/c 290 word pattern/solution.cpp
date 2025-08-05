#include <bits/stdc++.h>
using namespace std;

int main() {
    string pattern, s;
    cin >> pattern;
    cin.ignore();         
    getline(cin, s);      
  
    unordered_map<char, string> patternToString;
    unordered_map<string, char> stringToPattern;
    vector<string> wordList;
    stringstream ss(s);
    string word;

    while (ss >> word) {
        wordList.push_back(word);
    }

    if (pattern.size() != wordList.size()) {
        cout << "Lengths do not match." << endl;
        return 1;
    }

    for (int i = 0; i < pattern.size(); i++) {
        char p = pattern[i];
        string temp = wordList[i];

        // Optional: check for consistency
        if (patternToString.count(p) && patternToString[p] != temp) {
            
            return false;
        }

        if (stringToPattern.count(temp) && stringToPattern[temp] != p) {
            cout << "Mismatch in stringToPattern at " << temp << endl;
            return false;
        }

        patternToString[p] = temp;
        stringToPattern[temp] = p;
    }

   return true;
    

    return 0;
}
