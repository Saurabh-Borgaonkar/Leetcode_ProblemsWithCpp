#include <bits/stdc++.h>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            count++;
        } else {
            count = 0;
        }

        if (count == 3) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (threeConsecutiveOdds(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}