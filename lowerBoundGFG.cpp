#include <iostream>
#include <vector>
using namespace std;

/*
Question Meaning:

Lower Bound means:
Find the first index where element >= target
If no such element exists, return size of array

Example:
Input:  arr = {1, 3, 5, 7}, target = 4
Output: 2
Because arr[2] = 5 which is the first number >= 4
*/

int lowerBound(vector<int>& arr, int target) {
    
    // Traverse array from start
    for(int i = 0; i < arr.size(); i++) {
        
        // If current element is equal OR greater than target
        if(arr[i] >= target) {
            return i;  // return that index immediately
        }
    }

    // If no element >= target found
    return arr.size();
}

int main() {

    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 6;

    int result = lowerBound(arr, target);

    cout << "Lower Bound Index: " << result;

    return 0;
}