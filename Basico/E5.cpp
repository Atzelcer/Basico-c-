/*2.Realice un programa que lea de la entrada estandar
los siguientes datos de una persona:
  Edad : dato de tipo entero
  Sexo : dato de tipo caracter
  Altura : dato de tipo real
  tras leer datos , el programa debe mostrarlos en
  en la salida estandar 
*/

#include <iostream>
using namespace std;
int main (){
    int edad;
    char sexo[15];
    float altura;
    cout << "Inserte su edad : "; cin >> edad;
    cout << "Inserte su sexo : "; cin >> sexo;
    cout << "Inserte su altura : "; cin >> altura;
    

    cout << "Los datos de la persona son:"<< endl;
    cout << "Su edad es ==> "<< edad <<endl;
    cout << "Su sexo es ==> "<< sexo << endl;
    cout << "Su alturea es ==> "<< altura << endl;
    return 0;

}
