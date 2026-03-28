#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={1,1,2,2,2,3,4,4,5};
      vector<int> ans;
        for(int i=0;i<9;i++){
            if(nums[i]!=nums[i+1]){
            ans.push_back(nums[i]);
            }
        }
        cout<<ans.size();
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    return 0;
}