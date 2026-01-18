#include<iostream>
using namespace std;

int main() {
    int n,target;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array values: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
     cout<<"Enter the target:";
     cin>>target;
     int i=0,j=n-1;
     bool found=false;
     while (i<j)
     {
        int sum=arr[i]+arr[j];
        if (sum==target)
        {
            cout<<"i="<<i<<"j="<<j<<endl;
            found=true;
            break;
        }
        else if (sum<target)
        
            i++;
        else
        j--;
    }
    if (!found)
    
        cout<<"Not found";
    
   
    return 0;
     
    }