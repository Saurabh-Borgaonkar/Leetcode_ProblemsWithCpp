// Function to find first and last position of target using binary search

#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int l = 0, h = nums.size() - 1;
    int first = -1, last = -1;

    // Find first occurrence
    while(l <= h) {
        int mid = l + (h - l) / 2;

        if(nums[mid] == target) {
            first = mid;
            h = mid - 1;
        }
        else if(nums[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }

    l = 0;
    h = nums.size() - 1;

    // Find last occurrence
    while(l <= h) {
        int mid = l + (h - l) / 2;

        if(nums[mid] == target) {
            last = mid;
            l = mid + 1;
        }
        else if(nums[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }

    return {first, last};
}

int main() {
    int n, target;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = searchRange(nums, target);

    cout << "Output: [" << result[0] << ", " << result[1] << "]";

    return 0;
}