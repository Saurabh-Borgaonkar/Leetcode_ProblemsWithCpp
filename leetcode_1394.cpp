#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findLucky(vector<int>& arr) {
    map<int, int> mp;

    for (int num : arr) {
        mp[num]++;
    }

    int ans = 0;

    for (auto it : mp) {
        if (it.first == it.second) {
            ans = it.first;
        }
    }

    return (ans == 0) ? -1 : ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findLucky(arr);

    return 0;
}