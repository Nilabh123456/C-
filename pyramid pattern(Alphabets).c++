#include<iostream>
using namespace std;
int main(){
  int n=3;
  
   for (int i = 1; i <=n; i++)
   {
    char ch='A';
    
    for (int j = 1; j <i+1; j++)
    {
    
      cout<<ch;
      ch=ch+1;

    }
    cout<<endl;
    
   }
  return 0;
   
}