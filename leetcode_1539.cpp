#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    unordered_set<int> st(arr.begin(), arr.end());

    for (int i = 1; ; i++) {

        if (st.find(i) == st.end()) {
            k--;

            if (k == 0) {
                return i;
            }
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findKthPositive(arr, k) << endl;

    return 0;
}