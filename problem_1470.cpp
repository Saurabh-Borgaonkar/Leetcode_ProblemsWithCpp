#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {

    vector<int> ans;
    int count = n;

    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[count]);
        count++;
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    vector<int> result = shuffle(nums, n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}