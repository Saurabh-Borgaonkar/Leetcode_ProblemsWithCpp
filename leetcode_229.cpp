#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    int appear = n / 3;

    unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    for (auto it : mp) {
        if (it.second > appear) {
            ans.push_back(it.first);
        }
    }

    return ans;
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

    vector<int> ans = majorityElement(nums);

    cout << "Majority Elements: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}