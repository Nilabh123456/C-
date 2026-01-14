#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
   int temp=n;
   int sum=0;
   while (temp>0)
   {
    int d=temp%10;
     sum=sum+(d*d*d);
     temp=temp/10;
   }
   if (sum==n)
   {
    cout<<"Armstrong number";
   }
   else
   {
     cout<<"Not Armstrong number";
   }
  return 0; 
}