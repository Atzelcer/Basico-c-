#include <iostream>
using namespace std;
int main () {
    int numero, dato = 5;
    cout << "Digite un numero : "; cin >> numero;     
    
    if (numero == dato){
        cout << "El numero es 5 "<< endl;
    } else {
        cout << "El numero es distinto que 5 "<< endl;
    }
    if (numero != dato){
        cout << "El numero es distinto que 5 "<< endl;
    }else{
        cout << "El numero es 5 "<< endl;
    }
    if (numero > 5 && numero != 5){
        cout << "El numero es mayor que 5 "<< endl;
    }else{
        cout << "El numero es menor a 5 "<< endl;
    }
    return 0;
}