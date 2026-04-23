//print the values in decreasing order

#include<iostream>
using namespace std;
int SumOfNum(int n){
    if(n==1) return 1;
return n+SumOfNum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<SumOfNum(n);
    return 0;
}
