#include <iostream>

using namespace std;

float n, k;

 int main()
 {
     cout<<"Podaj liczbe wymierna: ";
     cin>>n;
     if(n<0)
     {
     k=n*(-1);
    cout<<k;
     }
     else 
     { k=n;
        cout<<k;
     }

return 0;

 }