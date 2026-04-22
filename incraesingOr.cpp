//print the values in decreasing order

#include<iostream>
using namespace std;
int increasing(int n,int count=0){
    if(n==count) return n;
    cout<<count+1<<" ";
return increasing(n,count+1);
}
int main(){
    int n;
    cin>>n;
    increasing(n);
    return 0;
}
