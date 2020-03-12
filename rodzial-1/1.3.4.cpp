#include <iostream>

using namespace std;

int a, b;

int k(int a)
{
if(a<0)
{
return a*(-1);
}
else
{
    return a;
}
}

int l(int b)
{
if(b<0)
{
return b*(-1);
}
else
{
    return b;
}


}
int main()
{
cout<<"(obliczanie wartosci bezwgledgnej)"<<endl;
cout<<"Podaj dwie liczby"<<endl;
cout<<"Podaj pierwsza liczbe: ";
cin>>a;
cout<<"Podaj druga liczbe: ";
cin>>b;

a = k(a);
b = l(b);


if(a>b)
{
cout<<"liczba a jest wieksza: "<<a;
}
else if(b>a)
{

cout<<"liczba b jest wieksza: "<<b;
}
else if(a==b)

cout<<"Liczby sa rowne";


return 0;




}