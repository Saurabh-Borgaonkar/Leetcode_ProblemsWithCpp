#include <bits/stdc++.h>
using namespace std;

int differenceOfSum(vector<int>& nums) {
    int sum = 0;
    int digitSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];

        // Calculate digit sum
        while (num != 0) {
            digitSum += num % 10;
            num /= 10;
        }

        // Calculate array element sum
        sum += nums[i];
    }

    return sum - digitSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << differenceOfSum(nums) << endl;

    return 0;
}