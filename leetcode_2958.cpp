#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int maxSubarrayLength(vector<int>& nums, int k) {
    map<int, int> mp;

    int l = 0;
    int ans = 0;

    for (int r = 0; r < nums.size(); r++) {

        // Add current element
        mp[nums[r]]++;

        // If frequency becomes greater than k,
        // shrink the window from the left
        while (mp[nums[r]] > k) {
            mp[nums[l]]--;
            l++;
        }

        // Update maximum length
        ans = max(ans, r - l + 1);
    }

    return ans;
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    cout << "Maximum Subarray Length: "
         << maxSubarrayLength(nums, k) << endl;

    return 0;
}