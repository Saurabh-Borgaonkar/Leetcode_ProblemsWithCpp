#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& arr) {
    int n = arr.size();

    // Traverse from the last digit
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 9) {
            arr[i]++;
            return arr;
        } else {
            arr[i] = 0;
        }
    }

    // If all digits were 9
    vector<int> ans(n + 1, 0);
    ans[0] = 1;

    return ans;
}

int main() {
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = plusOne(arr);

    cout << "Result: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}