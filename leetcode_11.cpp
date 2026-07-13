#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;

    int maxArea = 0;

    while (l < r) {
        int width = r - l;
        int h = min(height[l], height[r]);
        int area = width * h;

        maxArea = max(maxArea, area);

        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }

    return maxArea;
}

int main() {
    int n;
    cout << "Enter number of heights: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << "Maximum Area: " << maxArea(height) << endl;

    return 0;
}