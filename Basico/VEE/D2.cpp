#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float hora,hor,mit,minutos;
    cout << "BIENVENIDO AL ESTACIONAMIENTO "<< endl;
    cout << "Inserte la hora  : ";cin >> hora;
    cout << "Inserte los minutos : ";cin >> minutos;
    //cada hora tendra el costo de 10$.
    mit = minutos / 60;
    hor = round(hora + mit) ;
    cout << "El total a pagar sera de : "<< hor * 10 << endl;


    return 0;
}

/*
2. Un estacionamiento requiere determinar el cobro que debe aplicar a las personas que lo utilizan.
Considere que el cobro es con base en las horas y minutos que lo utilizan y que las fracciones de
hora se toman como completas. Realice un algoritmo en pseudocódigo que permita determinar
este cobro.  

*/