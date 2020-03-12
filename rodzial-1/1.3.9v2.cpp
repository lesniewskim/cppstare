#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float a,b;
char opcja;

int main()
{

for(;;)
{

    cout << "Podaj 1 liczbe: ";
    cin >> a;
    cout << "Podaj 2 liczbe: ";
    cin >> b;

    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Koniec programu" << endl;


    cout << endl;
    opcja=getch();

    switch(opcja)
    {
    case '1':
            cout<<"Suma = "<<a+b;
    break;

    case '2':
            cout<<"Roznica = "<<a-b;
    break;

    case '3':
            cout<<"Iloczyn = "<<a*b;
    break;

    case '4':
            if (b==0) cout << "Nie dzielimy przez zero!";
            else cout<<"Iloraz = "<<a/b;
    break;

    case '5':
            exit(0);
    break;

    default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
