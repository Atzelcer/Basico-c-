#include <iostream>
using namespace std;
int main (){

    double a,b,c,notafinal;
    cout << "Inserte la notas que haran 100% de la calificaion de un estudiante :"<< endl;
    cout << "Inserte la nota de Practicas 30% : "; cin >> a;
    cout << "Inserte la nota de Teorica 60% : "; cin >> b;
    cout << "Inserte la nota de Participacion 10% :";cin >> c;
    cout << endl;
    cout.precision(3);
    notafinal = a * 0.3 + b * 0.6 + c * 0.1;
    cout << "La nota de Practicas es de ==> "<< a * 0.3 << endl;
    cout << "La nota de Teorica es de ==> "<< b * 0.6 << endl;
    cout << "La nota de Participacion es de ==> "<< c * 0.1 << endl;
    cout << "La nota de Final es de ==> "<< notafinal << endl;
    return 0;
}