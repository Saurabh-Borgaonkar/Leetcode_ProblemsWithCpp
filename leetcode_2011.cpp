#include <iostream>
#include <vector>
#include <string>
using namespace std;

int finalValueAfterOperations(vector<string>& arr) {
    int x = 0;

    for (string op : arr) {
        if (op == "X++" || op == "++X") {
            x++;
        }
        else {
            x--;
        }
    }

    return x;
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << finalValueAfterOperations(arr);

    return 0;
}