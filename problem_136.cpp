#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1}; // example input

    cout << "Single number is: " << singleNumber(nums);

    return 0;
}