#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    map<int, int> mp;
    vector<int> ans;

    for (int num : nums) {
        mp[num]++;
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (mp.find(i) == mp.end()) {
            ans.push_back(i);
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

    vector<int> result = findDisappearedNumbers(nums);

    cout << "Missing Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}