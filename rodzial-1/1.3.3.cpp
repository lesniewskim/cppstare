#include <iostream>
using namespace std;

int main()
{
int a, b, c;

cout << "Podaj pierwsza liczbe: ";
cin >> a;
cout << "Podaj druga liczbe: ";
cin >> b;
cout << "Podaj druga liczbe: ";
cin >> c;
cout <<endl;

cout << "Najwieksza liczba to: ";

if(a > b && a > c) cout << a;
if(b > a && b > c) cout << b;
if(c > a && c > b) cout << c;

return 0;
}