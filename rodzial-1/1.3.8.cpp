#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
int opcja;
float a, b, c, h, pole;
int main()

{
 
 cout<<" Jakiej figury chcesz obliczyc pole: "<<endl;
 cout<<"1. <--kwadrat: "<<endl;
 cout<<"2. <--prostokat: "<<endl;
 cout<<"3. <--trojkat: "<<endl;
 cout<<"4. <--exit: "<<endl;
 
 
 opcja=getch();
 switch(opcja)
 {
    case '1': cout<<"Podaj dl.boku kwadratu: "<<endl;
            cin>>a;
            pole = a*a;
            cout<<"Pole figury wynosi :"<<pole<<endl;
            break;
    
    case '2': cout<<"Podaj dl.bokow prosotkata: "<<endl;
            cout<<"a: ";
            cin>>a;
            cout<<"b: ";
            cin>>b;


            pole = a*b;
            cout<<"Pole figury wynosi :"<<pole<<endl;
            break;
    
    case '3': cout<<"Podaj dl. podstawy trojkata i wysokosc: "<<endl;
            cout<<"a: ";
            cin>>a;
            cout<<"h: ";
            cin>>h;


            pole = 0.5*a*h;
            cout<<"Pole figury wynosi :"<<pole<<endl;
            break;

    case '4': cout<<"exit"<<endl;
                exit(0);


 default: cout<<"Nie ma takiej opcji w menu!"<<endl;
 break;
 }
        
 
   

    return 0;

}