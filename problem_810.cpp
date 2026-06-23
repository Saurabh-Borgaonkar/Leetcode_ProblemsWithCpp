#include <iostream>
#include <vector>
using namespace std;

bool xorGame(vector<int>& nums) {
    int x = 0;
    int n = nums.size();

    for (int num : nums) {
        x ^= num;
    }

    if (x == 0) {
        return true;
    }

    return n % 2 == 0;
}

int main() {
    vector<int> nums = {1, 1, 2}; // Example input

    if (xorGame(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}