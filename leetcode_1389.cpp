#include <bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        ans.insert(ans.begin() + index[i], nums[i]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n), index(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> index[i];
    }

    vector<int> ans = createTargetArray(nums, index);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}