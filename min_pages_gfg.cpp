#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr, int k, long long mid) {
    int students = 1;
    long long sum = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(sum + arr[i] > mid) {
            students++;
            sum = arr[i];
        } 
        else {
            sum += arr[i];
        }
    }

    return students <= k;
}

int findPages(vector<int> &arr, int k) {
    int n = arr.size();

    if(k > n) return -1;

    int l = *max_element(arr.begin(), arr.end());
    long long h = 0;

    for(int i = 0; i < n; i++) {
        h += arr[i];
    }

    int ans = h;

    while(l <= h) {
        long long mid = l + (h - l) / 2;

        if(possible(arr, k, mid)) {
            ans = mid;
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, k;

    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter pages in each book:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> k;

    int result = findPages(arr, k);

    cout << "Minimum maximum pages = " << result << endl;

    return 0;
}