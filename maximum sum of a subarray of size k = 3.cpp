//maximum sum of a subarray of size k = 3

#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the size of subarray: ";
    cin>>k;
    int sum=0;
    int max_sum=0;
    int l=0;
    int r=0;
    while(r<n){
        sum+=arr[r];
        if(r-l+1<k){
            r++;
        }else if(r-l+1==k){
            max_sum=max(max_sum,sum);
           sum=sum-arr[l];
           l++;
           r++;
        }
    }
    cout<<"Maximum sum of subarray of size "<<k<<" is "<<max_sum<<endl;
    return 0;
}