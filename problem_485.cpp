#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 1) {
            count++;
        } 
        else {
            ans = max(ans, count);
            count = 0;
        }
    }

    // handle case when array ends with 1s
    if(ans < count)
        return count;

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum consecutive 1s: " 
         << findMaxConsecutiveOnes(nums);

    return 0;
}