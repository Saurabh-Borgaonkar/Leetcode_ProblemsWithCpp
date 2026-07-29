#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(int n) {
    vector<int> arr;

    while (n != 0) {
        int digit = n % 10;
        arr.push_back(digit);
        n /= 10;
    }

    sort(arr.begin(), arr.end());

    return arr[arr.size() - 1] * arr[arr.size() - 2];
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Maximum Product: " << maxProduct(n) << endl;

    return 0;
}