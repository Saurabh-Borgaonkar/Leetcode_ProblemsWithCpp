#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;

    // Step 1: create rows filled with 1
    for (int i = 0; i < numRows; i++) {
        ans.push_back(vector<int>(i + 1, 1));
    }

    // Step 2: fill middle elements
    for (int i = 2; i < numRows; i++) {
        for (int j = 1; j < ans[i].size() - 1; j++) {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }

    return ans;
}

int main() {

    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    // Print Pascal's Triangle
    for (auto row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}