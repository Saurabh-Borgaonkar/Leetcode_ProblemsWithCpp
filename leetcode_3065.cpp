#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < k) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << minOperations(nums, k) << endl;

    return 0;
}