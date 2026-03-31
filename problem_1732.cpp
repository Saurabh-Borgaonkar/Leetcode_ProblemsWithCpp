#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int sum = 0;
    int max1 = 0;

    for(int i = 0; i < n; i++){
        sum = sum + gain[i];
        max1 = max(max1, sum);
    }

    return max1;
}

int main() {
    int n;
    cin >> n;

    vector<int> gain(n);

    for(int i = 0; i < n; i++){
        cin >> gain[i];
    }

    cout << largestAltitude(gain);

    return 0;
}