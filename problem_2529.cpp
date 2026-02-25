#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
     int count=0;
        int neg=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]!=0){
            if(nums[i]>0){
                count++;
            }else{
                neg++;
            }
            }
        }
            if(count>neg){
                return count;
            }else{
                return neg;
            }
    }
}