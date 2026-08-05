#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    for (auto it : mp) {
        if (it.second == nums.size() / 2) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << repeatedNTimes(nums);

    return 0;
}