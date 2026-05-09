//3Sum

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 2; i++) {

        int left = i + 1;
        int right = n - 1;

        while(left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0) {

                cout << nums[i] << " "
                     << nums[left] << " "
                     << nums[right] << endl;

                left++;
                right--;
            }

            else if(sum < 0) {
                left++;
            }

            else {
                right--;
            }
        }
    }

    return 0;
}