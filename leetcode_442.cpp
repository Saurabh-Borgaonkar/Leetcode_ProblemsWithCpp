#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int num : nums) {
        mp[num]++;
    }

    for (auto it : mp) {
        if (it.second >= 2) {
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

    vector<int> result = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}