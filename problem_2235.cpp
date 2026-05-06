#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution obj;

    int num1, num2;
    cin >> num1 >> num2;

    cout << obj.sum(num1, num2);

    return 0;
}