// 1475. Final Prices With a Special Discount in a Shop
//bruteforce
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            int discount = 0;
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;  
                }
            }
            result.push_back(prices[i] - discount);
        }

        return result;
    }
};
