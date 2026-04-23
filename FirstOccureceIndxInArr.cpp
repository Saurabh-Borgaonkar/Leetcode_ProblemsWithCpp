#include<iostream>
using namespace std;
int findIdx(int arr[],int t,int len,int i){
    if(i==len){
        return  -1;
    }
    if(arr[i]==t){
        return i;
    }
    
return findIdx(arr,t,len,i+1);
}
int main(){
     int arr[]={1,2,3,4,5,6};
     int target=5;
    cout<<findIdx(arr,target,6,0);
    return 0;
}