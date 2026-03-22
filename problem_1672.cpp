#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> accounts(r, vector<int>(c));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> accounts[i][j];
        }
    }

    int max = INT_MIN;

    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += accounts[i][j];
        }
        if(sum > max){
            max = sum;
        }
    }

    cout << max;

    return 0;
}