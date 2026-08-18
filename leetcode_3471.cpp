#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int largestInteger(vector<int>& nums, int k) {
    int large = -1;

    unordered_map<int, int> mp;

    int n = nums.size() - 1;

    int l = 0;
    int r = k - 1;

    while (r <= n) {

        unordered_set<int> st;

        int i = l;

        // Store unique elements of current subarray
        while (i <= r) {
            st.insert(nums[i]);
            i++;
        }

        // Count how many subarrays contain each element
        for (auto x : st) {
            mp[x]++;
        }

        l++;
        r++;
    }

    // Find largest element appearing in exactly one subarray
    for (auto x : mp) {
        if (x.second == 1) {
            large = max(large, x.first);
        }
    }

    return large;
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

    cout << "Largest Almost Missing Integer: "
         << largestInteger(nums, k) << endl;

    return 0;
}