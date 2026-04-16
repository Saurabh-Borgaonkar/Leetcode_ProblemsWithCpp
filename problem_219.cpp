#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> s;
    int r = 0;
    int l = 0;
    int n = nums.size();

    while (r < n) {
        if (s.size() > k) {
            s.erase(nums[l]);
            l++;
        }

        if (s.count(nums[r])) {
            return true;
        }

        s.insert(nums[r]);
        r++;
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};  // example input
    int k = 3;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}