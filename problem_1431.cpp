#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    vector<bool> ans;
    int maxC = 0;

    for (int i = 0; i < candies.size(); i++) {
        maxC = max(maxC, candies[i]);
    }

    for (int i = 0; i < candies.size(); i++) {
        if ((candies[i] + extraCandies) >= maxC) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> candies(n);

    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    int extraCandies;
    cin >> extraCandies;

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}