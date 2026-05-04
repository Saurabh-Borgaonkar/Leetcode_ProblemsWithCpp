#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    for (int j = 0; j < n; j++) {
        int k = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans[j][k] = matrix[i][j];
            k++;
        }
    }

    matrix = ans;
}

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    cout << "\nRotated Matrix:\n";
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}