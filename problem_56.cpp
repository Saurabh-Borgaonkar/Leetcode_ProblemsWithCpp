#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

    // Step 1: Sort intervals based on starting point
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;

    // Step 2: Add the first interval
    result.push_back(intervals[0]);

    // Step 3: Traverse remaining intervals
    for (int i = 1; i < intervals.size(); i++) {

        // Last merged interval
        vector<int>& last = result.back();

        // Check overlap
        if (intervals[i][0] <= last[1]) {

            // Merge by updating the ending point
            last[1] = max(last[1], intervals[i][1]);
        }
        else {

            // No overlap
            result.push_back(intervals[i]);
        }
    }

    return result;
}

int main() {

    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "Enter intervals (start end):\n";

    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> ans = merge(intervals);

    cout << "\nMerged Intervals:\n";

    for (auto interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}