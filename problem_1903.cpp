#include<iostream>
using namespace std;
int main(){
    string num = "10133890";
     int n=4;
        string ans="";
        if((num[n]-'0')%2!=0){
           cout<<num;
        }else{
        for(int i=0;i<n;i++){
            if((num[i]-'0')%2!=0){
                ans=ans+num[i];
            }
        }
    }
    cout<<ans;
    return 0;
}