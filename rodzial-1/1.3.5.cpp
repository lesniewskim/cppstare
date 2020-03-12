#include <iostream>
#include <math.h>
using namespace std;

float a,b,c,h,podstawa,pole,suma;
int opcja;

int main()

{
wybor:
cout<<"wybierz opcje:"<<endl;
cout<<"Podstawa + wysokosc Pisz:1"<<endl;
cout<<"BOK A, BOK B, BOK C Pisz:2"<<endl;
cin>>opcja;



if(opcja==1)
    {
        cout<<"Witaj obliczamy pole torjkata"<<endl;
        cout<<"Podaj dl.podstawy: ";
        cin>>podstawa;
        cout<<"Podaj wysokosc: ";
        cin>>h;

        pole = podstawa*h/2;

        cout<<"Pole trojkata wynosi: "<<pole;

    }

else if(opcja==2)
    {
        cout<<"Witaj obliczamy pole torjkata"<<endl;
        cout<<"Podaj bok A:";
        cin>>a;
        cout<<"Podaj bok B: ";
        cin>>b;
        cout<<"Podaj bok C: ";
        cin>>c;

        suma = (a+b+c)/2; 
        pole = sqrt(suma*(suma-a)*(suma-b)*(suma-c));

        cout<<"Pole trojkata wynosi: "<<pole;



    }



    return 0;
}
