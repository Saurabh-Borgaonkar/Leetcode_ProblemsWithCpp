//print the values in decreasing order

#include<iostream>
using namespace std;
int increasing(int n){
    if(n==1) return 1;
    
return increasing(n);
cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    increasing(n);
    return 0;
}
