#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    int i = 0;
    int j = 1;

    if (k < 0) {
        return 0;
    }

    sort(nums.begin(), nums.end());

    while (j < n) {

        if (i == j || nums[j] - nums[i] < k) {
            j++;
        }

        else if (nums[j] - nums[i] > k) {
            i++;
        }

        else {
            count++;
            i++;
            j++;

            // skip duplicates
            while (j < n && nums[j] == nums[j - 1]) {
                j++;
            }
        }
    }

    return count;
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = findPairs(nums, k);

    cout << "Number of unique k-diff pairs: " << result << endl;

    return 0;
}