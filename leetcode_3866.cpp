#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstUniqueEven(vector<int>& nums) {
    unordered_map<int, int> mp;

    // Count frequency
    for (int num : nums) {
        mp[num]++;
    }

    // Find first unique even number
    for (int num : nums) {
        if (num % 2 == 0 && mp[num] == 1) {
            return num;
        }
    }

    return -1;
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

    cout << "First Unique Even Number: "
         << firstUniqueEven(nums) << endl;

    return 0;
}