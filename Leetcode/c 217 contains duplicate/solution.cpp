#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, bool> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i]])
        {
            cout << "Duplicate found." << endl;
            return 0;
        }
        mp[nums[i]] = true;
    }

    cout << "All elements are unique." << endl;
    return 0;
}
