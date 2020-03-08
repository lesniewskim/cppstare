#include <iostream>
using namespace std;

int liczba;

int wartosc(int liczba)
{
if(liczba <0)
{
    return liczba*(-1);
}

else 
{
    return liczba;
}
}

int main()
{
    cout <<"podaj liczbe: ";
    cin>> liczba;

    liczba = wartosc(liczba);

    cout<<"wartosc bezwgledna= "<<liczba;



}