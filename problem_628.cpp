#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size() - 1;
    int sum1 = nums[0] * nums[1] * nums[n];
    int sum2 = nums[n] * nums[n-1] * nums[n-2];

    return max(sum1, sum2);
}

int main() {
    vector<int> nums = {-10, -10, 5, 2};  // Example input

    int result = maximumProduct(nums);

    cout << "Maximum product of three numbers: " << result << endl;

    return 0;
}