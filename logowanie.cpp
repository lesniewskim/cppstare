#include <iostream>


using namespace std;
string login,haslo;

int main()

{
    cout <<"login: ";
    cin >>login;
    cout <<"haslo: ";
    cin >>haslo;

    if((login=="michal")&&(haslo=="admin"))
    {
    cout <<"logowanie poprawne";
    }

    else
    {
    cout <<"bledne logowanie";
    }
    
    return 0;


}
