class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int ans;
        bool val=false;
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                ans=i;
                val=true;
                break;
            }
        }
        int m=*max_element(nums.begin(),nums.end());
        if(!val){
            return m+1;
        }
        return ans;
    }
};