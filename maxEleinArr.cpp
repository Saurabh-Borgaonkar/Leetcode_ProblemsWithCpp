
#include<climits>
#include<iostream>
using namespace std;
int MaxEleArray(int arr[],int i,int size,int max){
    if(i==size) return max; 
    if(arr[i]>max) max=arr[i];
return MaxEleArray(arr,i+1,size,max);
}
int main(){
    int n;
    int arr[]={1,2,5,16,7,2};
    int max=INT_MIN;
   cout<< "Max Element in array : "<<MaxEleArray(arr,0,6,max);
    return 0;
}
