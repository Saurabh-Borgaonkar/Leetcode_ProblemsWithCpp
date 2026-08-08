#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int l = 0;
    int h = arr.size() - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (mid > 0 && mid < arr.size() - 1 &&
            arr[mid] > arr[mid - 1] &&
            arr[mid] > arr[mid + 1]) {

            return mid;
        }
        else if (arr[mid] < arr[mid + 1]) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
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

    cout << "Peak Index: " << peakIndexInMountainArray(arr);

    return 0;
}