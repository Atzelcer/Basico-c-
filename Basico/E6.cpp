/*
Escribe la siguiente expresiones como expresion en c++
*/
#include <iostream>
using namespace std;
int main (){
    double a,b,resul=0;
    cout << "Inserte el primer numero ==> "; cin >> a;
    cout << "Inserte el segundo numero ==> ";cin >> b ;
    resul = (a / b) + 1 ;
    cout.precision(2);
    cout << "El resultado de operar a / b + 1 es ==> "<< resul << endl;
    return 0;
}