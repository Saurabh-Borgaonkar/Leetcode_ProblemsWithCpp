#include <iostream>
#include <vector>
using namespace std;

int maxDistance(vector<int>& colors) {
    int n = colors.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(colors[i] != colors[0])
            ans = max(ans, i);

        if(colors[i] != colors[n-1])
            ans = max(ans, n - 1 - i);
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of houses: ";
    cin >> n;

    vector<int> colors(n);

    cout << "Enter colors of houses: ";
    for(int i = 0; i < n; i++) {
        cin >> colors[i];
    }

    cout << "Maximum distance between different colored houses = "
         << maxDistance(colors);

    return 0;
}