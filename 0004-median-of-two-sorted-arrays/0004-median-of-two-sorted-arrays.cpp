class Solution {
public:
vector<int> merge_array(vector<int>& nums1, vector<int>& nums2){
   
      vector<int> nums;
    //merging two sorted lists to nums 
    int i=0;
    int j=0;

    int n = nums1.size();
    int m = nums2.size();

    while(i<n && j<m){
        if(nums1[i]<=nums2[j]){
            nums.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            nums.push_back(nums2[j]);
            j++;
        }
    }

    while(i<n){
        nums.push_back(nums1[i]);
        i++;
    }

    while(j<m){
        nums.push_back(nums2[j]);
        j++;
    }

    return nums;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> merge=merge_array(nums1,nums2);
         int s=merge.size();
        double median=0;
        if(s%2!=0){
            int mid=s/2;
            median=merge[mid];

        }else{
            int mid1=s/2;
            int mid2=(s/2)-1;
            median=(double)(merge[mid1]+merge[mid2])/2;
        }
        
       return median;
    }
};