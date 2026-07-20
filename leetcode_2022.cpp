#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

    if (original.size() != m * n)
        return {};

    vector<vector<int>> ans(m, vector<int>(n));

    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = original[k];
            k++;
        }
    }

    return ans;
}

int main() {
    int size;
    cout << "Enter size of original array: ";
    cin >> size;

    vector<int> original(size);

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> original[i];
    }

    int m, n;
    cout << "Enter rows (m): ";
    cin >> m;

    cout << "Enter columns (n): ";
    cin >> n;

    vector<vector<int>> ans = construct2DArray(original, m, n);

    if (ans.empty()) {
        cout << "Cannot construct 2D array." << endl;
    } else {
        cout << "2D Array:" << endl;
        for (auto &row : ans) {
            for (int x : row) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}