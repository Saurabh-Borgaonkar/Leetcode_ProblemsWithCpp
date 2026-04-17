#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> h(n);

    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    // Step 1: Create suffix minimum array
    vector<long long> suffixMin(n);
    suffixMin[n-1] = h[n-1];

    for(int i = n - 2; i >= 0; i--) {
        suffixMin[i] = min(h[i], suffixMin[i+1]);
    }

    // Step 2: Traverse and count valid splits
    long long prefixMax = h[0];
    int blocks = 0;

    for(int i = 0; i < n - 1; i++) {
        prefixMax = max(prefixMax, h[i]);

        if(prefixMax <= suffixMin[i+1]) {
            blocks++;
        }
    }

    // Final answer
    cout << blocks + 1 << endl;

    return 0;
}