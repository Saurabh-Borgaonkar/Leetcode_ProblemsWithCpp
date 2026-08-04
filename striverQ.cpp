#include <iostream>
#include <vector>
using namespace std;

int findKRotation(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return i + 1;
        }
    }

    return 0; // Array is not rotated
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << findKRotation(nums);

    return 0;
}