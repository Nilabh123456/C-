#include<iostream>
using namespace std;
int main() {
    long long base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;

    long long result = 1;
    while (power>0)
    {
      if(power%2==1)
{
    result=result*base;
}
    base=base*base;
    power=power/2;
    
}
cout<<result<<endl;
return 0;
    
}