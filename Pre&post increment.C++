#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter the value of a";
   cin>>a;
   b=a++;
   c=++a;
   cout<<"Preincrement="<<b<<endl;
   cout<<"Preincrement="<<c<<endl;
   return 0;
}