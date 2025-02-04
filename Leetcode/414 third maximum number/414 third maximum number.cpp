#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
    bool foundThird = false;

    for (int num : nums) {
        if (num == first || num == second || num == third) {
            continue;  // Skip duplicate values
        }

        if (num > first) {
            third = second;
            second = first;
            first = num;
            foundThird = true;
        } else if (num > second) {
            third = second;
            second = num;
            foundThird = true;
        } else if (num > third) {
            third = num;
            foundThird = true;
        }
    }

    return foundThird && third != LONG_MIN ? third : first;
}

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << "Output: " << thirdMax(nums) << endl;
    return 0;
}
