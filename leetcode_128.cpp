#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty())
        return 0;

    map<int, int> mp;

    // Store unique elements
    for (int num : nums) {
        mp[num]++;
    }

    int count = 1;
    int maxCount = 1;

    auto prev = mp.begin();
    auto it = prev;
    it++;

    while (it != mp.end()) {
        if (it->first == prev->first + 1) {
            count++;
        } else {
            count = 1;
        }

        maxCount = max(maxCount, count);

        prev = it;
        it++;
    }

    return maxCount;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Longest Consecutive Length: " << longestConsecutive(nums) << endl;

    return 0;
}