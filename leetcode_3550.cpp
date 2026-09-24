#include <bits/stdc++.h>
using namespace std;

int smallestIndex(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int n = nums[i];

        while (n != 0) {
            int ld = n % 10;
            sum += ld;
            n /= 10;
        }

        if (sum == i) {
            return i;
        }
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

    cout << smallestIndex(nums) << endl;

    return 0;
}