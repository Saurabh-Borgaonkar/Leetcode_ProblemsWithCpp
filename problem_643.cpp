#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    double sum = 0;
    int r = 0;
    double max1 = INT_MIN;

    while(r < n) {
        sum += nums[r];

        if(r >= k - 1) {
            max1 = max(max1, sum / k);
            sum -= nums[r - (k - 1)];
        }

        r++;
    }

    return max1;
}

int main() {
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter window size k: ";
    cin >> k;

    double result = findMaxAverage(nums, k);

    cout << "Maximum average subarray: " << result << endl;

    return 0;
}