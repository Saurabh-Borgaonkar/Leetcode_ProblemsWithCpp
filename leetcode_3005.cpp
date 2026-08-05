#include <iostream>
#include <vector>
#include <map>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    int maxFrq = 0;

    // Find maximum frequency
    for (auto it : mp) {
        maxFrq = max(maxFrq, it.second);
    }

    int count = 0;

    // Count elements having maximum frequency
    for (auto it : mp) {
        if (it.second == maxFrq) {
            count += it.second;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maxFrequencyElements(nums);

    return 0;
}