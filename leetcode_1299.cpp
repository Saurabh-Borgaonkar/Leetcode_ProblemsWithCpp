#include <bits/stdc++.h>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int mx = -1;

    for (int i = arr.size() - 1; i >= 0; i--) {
        int curr = arr[i];

        arr[i] = mx;

        if (curr > mx) {
            mx = curr;
        }
    }

    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = replaceElements(arr);

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}