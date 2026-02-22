#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    int l=0,h=n-1;
    bool f=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter Target : ";
    cin>>target;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==target){
            f=true;
            break;
        }
        if(arr[mid]<target){
            l=mid+1;
        }else if(arr[mid]>target){
            h=mid-1;
        }
    }
    if(f){
        cout<<"\nFound";
    }else{
        cout<<"\nnot found";
    }
    
        return 0;
}