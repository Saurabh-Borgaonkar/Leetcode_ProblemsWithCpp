#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (i == j)
                continue;

            if (nums[j] < num) {
                count++;
            }
        }

        ans.push_back(count);
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

    vector<int> ans = smallerNumbersThanCurrent(nums);

    cout << "Result: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}