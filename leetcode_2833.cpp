#include <iostream>
#include <vector>
using namespace std;

int returnToBoundaryCount(vector<int>& nums) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << returnToBoundaryCount(nums);

    return 0;
}