#include <bits/stdc++.h>
using namespace std;

int findSpecialInteger(vector<int>& arr) {
    int cnt = 1;
    int x = arr.size() / 4;

    if (arr.size() == 1) {
        return arr[0];
    }

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i - 1] == arr[i]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (cnt > x) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findSpecialInteger(arr) << endl;

    return 0;
}