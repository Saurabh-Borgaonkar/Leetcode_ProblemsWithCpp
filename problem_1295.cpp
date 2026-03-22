#include <iostream>
#include <vector>
using namespace std;

int findLen(int n){
    int count = 0;
    while(n != 0){
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int c = 0;

    for(int i = 0; i < nums.size(); i++){
        int count = findLen(nums[i]);
        if(count % 2 == 0){
            c++;
        }
    }

    cout << c;

    return 0;
}