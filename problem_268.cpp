#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int missing = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == missing) {
                missing++;
            } else {
                break;
            }
        }
        return missing;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << "Missing number is: " << obj.missingNumber(nums) << endl;

    return 0;
}