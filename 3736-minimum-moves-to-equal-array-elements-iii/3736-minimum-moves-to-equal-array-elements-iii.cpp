class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_num=1;
        int diff=0;
        for(int i=0;i<nums.size();i++){
            if(max_num<nums[i]){
                max_num=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            diff=diff+max_num-nums[i];
        }

        return diff;
    }
};