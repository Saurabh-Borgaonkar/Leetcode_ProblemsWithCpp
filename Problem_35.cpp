#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,12,17,65};
    int index=0;
    int target;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
     cin>>target;

        for(int i=0;i<5;i++){
            if(arr[i]==target){
                cout<<i<<endl;
                break;
            }else if(arr[i]<target){
                index++;
            }
        }
        cout<<"Where You can add new value at pos : "<<index;
        return 0;
}