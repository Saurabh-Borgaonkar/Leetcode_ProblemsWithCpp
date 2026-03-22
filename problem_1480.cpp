#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 1; i < nums.size(); i++){
        nums[i] = nums[i] + nums[i-1];
    }

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}