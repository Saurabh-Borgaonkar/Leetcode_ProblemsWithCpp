#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={1,1,1,1,1,1,1,1,1,1};
    int target=1;
    int start=0;
      int ans=0;
        for(int i=0;i<10;i++){
            if(nums[i]==target){
                ans=abs(i-start);
                break;
            }
        }
        cout<<ans;
    return 0;
}