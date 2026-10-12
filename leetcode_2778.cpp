#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += nums[i - 1] * nums[i - 1];
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << sumOfSquares(nums) << endl;

    return 0;
}