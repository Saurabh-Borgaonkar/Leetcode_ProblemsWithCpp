#include<iostream>
using namespace std;
void call(int n){
    if(n==0)
    return;
    // cout<<n<<endl;
    call(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n=20;
    call(n);
    return 0;
}