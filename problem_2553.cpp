#include <iostream>
#include <vector>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {

    vector<int> ans;

    for(int num : nums) {

        string s = to_string(num);

        for(char ch : s) {
            ans.push_back(ch - '0');
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = separateDigits(nums);

    cout << "Separated digits: ";

    for(int digit : result) {
        cout << digit << " ";
    }

    return 0;
}