#include <iostream>
#include <vector>
#include <map>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (mp.find(i) == mp.end()) {
            return i;
        }
    }

    return nums.size() + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << firstMissingPositive(nums);

    return 0;
}