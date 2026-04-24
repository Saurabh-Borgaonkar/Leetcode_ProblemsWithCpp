//print the sum of digit

#include<iostream>
using namespace std;
int DigitSum(int n,int sum){
    if(n==0) return sum;
   int ld=n%10;
   sum=sum+ld; 
return DigitSum(n/10,sum);
}
int main(){
    int n;
    cin>>n;
   cout<<"Sum of digit "<<n<<" is : "<< DigitSum(n,0);
    return 0;
}
