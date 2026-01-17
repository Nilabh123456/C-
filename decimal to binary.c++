#include<iostream>
using namespace std;
int main(){
    int ans=0,pow=1,n,rem;
    cout<<"Enter the decimal number:";
    cin>>n;
    while(n>0){
     rem=n%2;
    n=n/2;
    ans=ans+(rem*pow);
    pow=pow*10;
    }
    cout<<"Binary Number="<<ans<<endl;
return 0;
}