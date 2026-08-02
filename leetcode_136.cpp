#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> mp;

    // Count frequency
    for (int num : nums) {
        mp[num]++;
    }

    // Find the number with frequency 1
    for (auto it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    return -1; // Safety return
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

    cout << "Single Number: " << singleNumber(nums) << endl;

    return 0;
}