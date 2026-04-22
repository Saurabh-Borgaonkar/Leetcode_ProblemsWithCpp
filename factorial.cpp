//print the values in decreasing order

#include<iostream>
using namespace std;
int decreasing(int n){
    if(n==0) return 1;
    cout<<n<<" ";
return decreasing(n-1);
}
int main(){
    int n;
    cin>>n;
    decreasing(n);
    return 0;
}
