#include <iostream>

using namespace std;

float a, b, c ,suma, srednia;
int main()
{
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Podaj trzecia liczbe: ";
    cin>>c;
    suma = (a+b+c);
    srednia = suma/3;

    cout<<"srednia wynosi: "<<srednia;

    return 0;


}