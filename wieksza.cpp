#include <iostream>

using namespace std;

int a, b;
int main()
{
cout<<"podaj liczbe a: ";
cin >>a;
cout<<"podaj liczbe b: ";
cin >>b;
if (a==b)
{
    cout <<"liczby sa rowne ";

}
if(a>b)
{

   cout<< "liczba a jest wiekzsza "<<a;
   
}

else if(b>a)
{
   cout<<"liczba b jest wiekzsza "<<b;
   }

   return 0;
}