#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum Product: " << maxProduct(nums) << endl;

    return 0;
}