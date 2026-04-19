/*
1855. Maximum Distance Between a Pair of Values

Given two non-increasing arrays nums1 and nums2,
find maximum (j - i) such that:
i <= j AND nums1[i] <= nums2[j]
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums1(n), nums2(m);

    for(int i = 0; i < n; i++)
        cin >> nums1[i];

    for(int j = 0; j < m; j++)
        cin >> nums2[j];

    int i = 0, j = 0, ans = 0;

    while(i < n && j < m) {
        if(nums1[i] <= nums2[j]) {
            ans = max(ans, j - i);
            j++;
        } else {
            i++;
        }
    }

    cout << ans;
}