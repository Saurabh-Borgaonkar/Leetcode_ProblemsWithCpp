#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;

    // Separate positive and negative numbers
    for (int num : nums) {
        if (num < 0)
            neg.push_back(num);
        else
            pos.push_back(num);
    }

    int p = 0, n = 0;

    // Rearrange alternately
    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) {
            ans.push_back(pos[p]);
            p++;
        } else {
            ans.push_back(neg[n]);
            n++;
        }
    }

    return ans;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    vector<int> ans = rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}