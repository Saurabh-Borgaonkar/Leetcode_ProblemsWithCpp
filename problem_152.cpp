#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int maxProduct(vector<int>& nums) {
           int curSum=nums[0];
        int maxSum=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            curSum=max(abs(nums[i]),abs(curSum*nums[i]));
            maxSum=max(curSum,maxSum);
        }
        return maxSum;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
cout<<maxProduct(nums);
    return 0;
}