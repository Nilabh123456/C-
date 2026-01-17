#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter the size";
cin>>n;
int arr[n];
cout<<"Enter the elements:";
for (int i = 0; i <n; i++){
 cin>>arr[i];
sum+=arr[i];
}
int avg=sum/n;
cout<<"Sum="<<sum<<endl;
cout<<"avg="<<avg<<endl;
return 0;

}