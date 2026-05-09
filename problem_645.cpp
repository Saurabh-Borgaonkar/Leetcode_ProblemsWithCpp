#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {

    int n = nums.size();

    vector<int> freq(n + 1, 0);

    for(int num : nums){
        freq[num]++;
    }

    int missing = 0;
    int duplicate = 0;

    for(int i = 1; i <= n; i++){

        if(freq[i] == 2){
            duplicate = i;
        }

        if(freq[i] == 0){
            missing = i;
        }
    }

    return {duplicate, missing};
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<int> ans = findErrorNums(nums);

    cout << "Duplicate Number: " << ans[0] << endl;
    cout << "Missing Number: " << ans[1] << endl;

    return 0;
}