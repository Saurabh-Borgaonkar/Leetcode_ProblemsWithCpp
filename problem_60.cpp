#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string getPermutation(int n, int k) {

    int num = 0;

    for(int i = 1; i <= n; i++) {
        num = num * 10 + i;
    }

    string str = to_string(num);

    while(k > 1) {
        next_permutation(str.begin(), str.end());
        k--;
    }

    return str;
}

int main() {

    int n, k;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    string ans = getPermutation(n, k);

    cout << "Permutation: " << ans << endl;

    return 0;
}