//print the values in decreasing order

#include<iostream>
using namespace std;
int isArraySort(int arr[],int len){
    if(len==0 or len==1){
        return true;
    }
    if( isArraySort(arr,len-1) and arr[len-1]>arr[len-2]){
        return true;
    }
return false;
}
int main(){
    int arr[]={1,2,6,4,5,6};
    cout<<isArraySort(arr,6);
    return 0;
}
