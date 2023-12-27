#include <iostream>
using namespace std;

int main (){

    double a,b,c,d;
    cout.precision(2);
    cout << "Inserte cuatro numeros "<< endl;
    cout << "Inserte el numero 1 : "; cin >> a;
    cout << "Inserte el numero 2 : "; cin >> b;
    cout << "Inserte el numero 3 : ";cin >> c;
    cout << "Inserte el numero 4 : ";cin >> d;
    cout << "Siguiendo la expresion a+b/c+d tenemos :"<<endl;
    cout << "El resultado de la expresion es ==> "<< (a+b)/(c/d) << endl;

    return 0;
}