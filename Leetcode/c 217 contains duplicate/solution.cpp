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

    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    bool hasDuplicate = false;

    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
        if (i.second > 1)
        {
            hasDuplicate = true;
        }
    }

    if (hasDuplicate)
        cout << "Duplicates found." << endl;
    else
        cout << "All elements are unique." << endl;

    return 0;
}
