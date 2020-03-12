#include <iostream>
#include <math.h>

using namespace std;

float a, b, c, delta, x1, x2;

int main()
{
  
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    delta = b * b -( 4 * a * c );
    if( delta < 0 )
    {
        cout << "Brak rozwiazan";
        return 0;
    }
    if( delta == 0 )
    {
        
        cout << "x0 = " <<- b /( 2 * a );
       
        return 0;
    }
    delta = sqrt( delta );
    if( b > 0 )
    {
        x1 =( - b - delta ) /( 2 * a );
        x2 = c /( a * x1 );
    }
    else
    {
        x2 =( - b + delta ) /( 2 * a );
        x1 = c /( a * x2 );
    }
    cout << "Rowanie ma dwa rozwiazania: "<<endl;
    cout << "x1 = " << x1<<endl;
    cout << "x2 = " << x2;
    return 0;
}