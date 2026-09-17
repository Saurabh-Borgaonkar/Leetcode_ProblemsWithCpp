#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> mp;

    vector<int> ans;
    vector<int> remain;

    // Count frequency of elements in arr1
    for (auto i : arr1) {
        mp[i]++;
    }

    // Add elements according to arr2
    for (int i = 0; i < arr2.size(); i++) {
        auto it = mp.find(arr2[i]);
        int k = 1;

        if (it != mp.end()) {
            int s = it->second;

            while (k <= s) {
                ans.push_back(arr2[i]);
                k++;
            }
        }
    }

    // Store elements already added in ans
    mp.clear();

    for (int i : ans) {
        mp[i]++;
    }

    // Find remaining elements from arr1
    for (int i = 0; i < arr1.size(); i++) {
        if (mp.find(arr1[i]) == mp.end()) {
            remain.push_back(arr1[i]);
        }
    }

    // Sort remaining elements
    sort(remain.begin(), remain.end());

    // Add remaining elements to answer
    for (int i : remain) {
        ans.push_back(i);
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> ans = relativeSortArray(arr1, arr2);

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}