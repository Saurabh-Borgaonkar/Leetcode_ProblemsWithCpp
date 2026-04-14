#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];

    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int l = 0;
    int h = n - 1;
    bool found = false;

    while(l <= h) {
        int mid = (l + h) / 2;

        if(nums[mid] == target) {
            cout << "Found at index: " << mid << endl;
            found = true;
            break;
        }
        else if(nums[mid] < target) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }

    if(!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}