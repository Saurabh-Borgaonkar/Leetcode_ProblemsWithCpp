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
    int c=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==target){
            c=mid;
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
     cout<<c-1<<" "<<c;
     }else{
         cout<<" [-1,-1] ";
        } 
    
        return 0;
}