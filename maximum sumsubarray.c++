#include<iostream>
using namespace std;
int main(){
    int n;
    int maxsum=INT8_MIN;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array values:";
    for (int i = 0; i <n; i++)
     cin>>arr[i];
 for (int start = 0; start<n; start++)
 {
    int cursum=0;
    for(int end=start;end<n;end++){
        cursum=cursum+arr[end];
        maxsum=max(cursum,maxsum);
        
        
    }
 }
 cout<<"MAX SUMARRAY"<<maxsum<<endl;
 return 0;
 
    
}