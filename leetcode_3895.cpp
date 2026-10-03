#include <bits/stdc++.h>
using namespace std;

int countDigitOccurrences(vector<int>& nums, int digit) {
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];

        while (num != 0) {
            if (num % 10 == digit) {
                cnt++;
            }

            num /= 10;
        }
    }

    return cnt;
}

int main() {
    int n, digit;
    cin >> n >> digit;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << countDigitOccurrences(nums, digit) << endl;

    return 0;
}