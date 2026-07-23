#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int prefix = 0;
    int ans = 0;

    // Prefix sum 0 occurs once initially
    mp[0] = 1;

    for (int num : nums) {
        prefix += num;

        if (mp.find(prefix - k) != mp.end()) {
            ans += mp[prefix - k];
        }

        mp[prefix]++;
    }

    return ans;
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

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    cout << "Number of subarrays = " << subarraySum(nums, k) << endl;

    return 0;
}