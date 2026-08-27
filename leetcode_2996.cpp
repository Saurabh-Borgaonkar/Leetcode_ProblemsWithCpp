#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int missingMultiple(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    for (int x : nums) {
        mp[x]++;
    }

    int i = 1;

    while (i <= 101) {
        if (mp.find(i * k) == mp.end()) {
            return i * k;
        }/
        i++;
    }

    return -1;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    cout << missingMultiple(nums, k);

    return 0;
}