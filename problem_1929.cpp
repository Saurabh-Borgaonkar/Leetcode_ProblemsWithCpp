#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
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

    vector<int> result = getConcatenation(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}