/*Problema numero 1: Escribe un programa que lea de la entrada estandar dos numeros
y muestre en la salida estandar su suma, resta, multiplicacion y division
*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Inserte dos numeros "<< endl;
    cin >> a;
    cin >> b;
    cout << "La suma de los numeros es ==> "<<a+b<< endl;
    cout << "la resta de los numeros es ==> "<<a-b<< endl;
    cout << "La multiplicacion de los numeros es ==> "<<a*b<< endl;
    cout << "La division de los numeros es ==> "<<a/b<< endl;   

    return 0;
}