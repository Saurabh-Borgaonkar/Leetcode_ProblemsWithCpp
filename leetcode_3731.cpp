#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findMissingElements(vector<int>& nums) {
    vector<int> ans;
    map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    int l = mp.begin()->first;   // smallest element
    int r = mp.rbegin()->first;  // largest element

    for (int i = l; i <= r; i++) {
        if (mp.find(i) == mp.end()) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = findMissingElements(nums);

    cout << "Missing Elements: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}