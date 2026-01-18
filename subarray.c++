#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array values:";
    for (int i = 0; i <n; i++)
     cin>>arr[i];
 for (int start = 0; start<n; start++)
 {
    for(int end=start;end<n;end++){
        for (int j = start; j<=end; j++)
        {
            cout<<arr[j]<<"";
        }
        
    }
    cout<<endl;
 }
 return 0;
 
    
}