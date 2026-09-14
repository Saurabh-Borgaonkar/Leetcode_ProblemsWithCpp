#include <bits/stdc++.h>
using namespace std;

int arraySign(vector<int>& nums) {
    int neg = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            return 0;
        }

        if (nums[i] < 0) {
            neg++;
        }
    }

    if (neg % 2 == 0) {
        return 1;
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

    cout << arraySign(nums) << endl;

    return 0;
}