#include<iostream>
using namespace std;
int main(){
    int ans=0,pow=1,n,rem;
    cout<<"Enter the binary number:";
    cin>>n;
    while(n>0){
     rem=n%10;
    n=n/10;
    ans=ans+(rem*pow);
    pow=pow*2;
    }
    cout<<"Decimal="<<ans<<endl;
return 0;
}