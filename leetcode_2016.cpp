#include <bits/stdc++.h>
using namespace std;

int maximumDifference(vector<int>& nums) {
    int minPrice = INT_MAX;
    int mxProfit = 0;

    for (int i = 0; i < nums.size(); i++) {
        minPrice = min(minPrice, nums[i]);

        mxProfit = max(mxProfit, nums[i] - minPrice);
    }

    if (mxProfit == 0) {
        return -1;
    }

    return mxProfit;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maximumDifference(nums) << endl;

    return 0;
}