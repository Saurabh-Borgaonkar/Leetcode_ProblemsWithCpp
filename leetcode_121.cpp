#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
}

int main() {
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}