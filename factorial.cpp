#include<iostream>
using namespace std;
int main(){
    int n;
    int pow;
    cin>>n;
    cin>>pow;
    int ans=1;
    for(int i=1;i<=pow;i++){
        ans*=n;
    }
    cout<<ans;
    return 0;
}
