#include <iostream>

using namespace std;

int n,k;
int main()
{
cout<<"Podaj liczbe: ";
cin >>n;
if (n<0)
{
k = n*(-1);

cout <<"|"<<n<<"| = "<<k;
}
else if(n>0)
{
cout <<"|"<<n<<"| = "<<n;

}

return 0;
}
