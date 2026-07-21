#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> prefSum;

    NumArray(vector<int>& nums) {
        prefSum.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            prefSum.push_back(prefSum[i - 1] + nums[i]);
        }
    }

    int sumRange(int left, int right) {
        if (left == 0)
            return prefSum[right];

        return prefSum[right] - prefSum[left - 1];
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    NumArray obj(nums);

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int left, right;
        cout << "Enter left and right indices: ";
        cin >> left >> right;

        cout << "Sum = " << obj.sumRange(left, right) << endl;
    }

    return 0;
}