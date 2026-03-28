#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;

    int j = 0;

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    vector<int> nums = {1,1,2,2,3,4,4};

    int newSize = removeDuplicates(nums);

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < newSize; i++){
        cout << nums[i] << " ";
    }

    cout << "\nNew size = " << newSize;

    return 0;
}