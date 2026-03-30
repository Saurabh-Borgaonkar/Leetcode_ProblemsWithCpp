#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={0,1,0,2,13};
    vector<int> ans;
        int czero=0;
        for(int i=0;i<5;i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }else czero++;
        }
        for(int i=0;i<czero;i++){
            ans.push_back(0);
        }
        cout<<czero<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
}