#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;

    while (l < r) {
        int sum = numbers[l] + numbers[r];

        if (sum == target) {
            return {l + 1, r + 1};   // 1-based indexing
        }
        else if (sum > target) {
            r--;
        }
        else {
            l++;
        }
    }

    return {};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = twoSum(numbers, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}