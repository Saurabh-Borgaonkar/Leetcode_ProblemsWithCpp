#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int sum = 0;

    // Customers already satisfied
    for (int i = 0; i < customers.size(); i++) {
        if (grumpy[i] == 0) {
            sum += customers[i];
        } else {
            grumpy[i] = customers[i];
        }
    }

    int prevSum = sum;
    int mxSum = 0;

    sum = 0;
    int l = 0, r = 0;

    // Sliding window
    while (r < customers.size()) {
        sum += grumpy[r];

        if (r - l + 1 >= minutes) {
            mxSum = max(mxSum, sum);
            sum -= grumpy[l];
            l++;
        }

        r++;
    }

    return prevSum + mxSum;
}

int main() {
    int n;

    cout << "Enter number of customers: ";
    cin >> n;

    vector<int> customers(n);
    vector<int> grumpy(n);

    cout << "Enter customers array: ";
    for (int i = 0; i < n; i++) {
        cin >> customers[i];
    }

    cout << "Enter grumpy array (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> grumpy[i];
    }

    int minutes;
    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Maximum satisfied customers: "
         << maxSatisfied(customers, grumpy, minutes) << endl;

    return 0;
}