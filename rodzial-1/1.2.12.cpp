#include <iostream>
#include <iomanip>

using namespace std;

float n, k;

int main()

{
cout<<"Podaj liczbe: ";
cin>>n;

if(n<1)
{
k = n*10;

cout<<k<<".0e-1";

}
else if(n>=1)
{
cout<<n;
}
return 0;

}