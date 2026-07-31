#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;

    vector<int> a, b;

    for (int x : nums1) {
        mp1[x]++;
    }

    for (int x : nums2) {
        mp2[x]++;
    }

    for (auto it : mp1) {
        if (mp2.find(it.first) == mp2.end()) {
            a.push_back(it.first);
        }
    }

    for (auto it : mp2) {
        if (mp1.find(it.first) == mp1.end()) {
            b.push_back(it.first);
        }
    }

    return {a, b};
}

int main() {
    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of nums2: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    vector<vector<int>> ans = findDifference(nums1, nums2);

    cout << "Elements only in nums1: ";
    for (int x : ans[0]) {
        cout << x << " ";
    }

    cout << "\nElements only in nums2: ";
    for (int x : ans[1]) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}