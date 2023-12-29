#include <iostream>
using namespace std;
int main (){
    int a = 1,dia,mes,anio,diac,mesac,anioac;
    cout << "Inserte los datos correspondientes para la entreviste : "<< endl;
    while(a <= 3){
        switch(a){
            case 1: cout << "Inserte el dia de su nacimiento : ";cin >> dia ; break;
            case 2: cout << "Inserte el mes de su nacimiento : ";cin >> mes ; break; 
            case 3: cout << "Inserte el anio de su nacimiento : ";cin >> anio ; break;
            default : cout << "Error al insertar los datos"<< endl;
        }
        a += 1 ;
    }
    //realizando la conversion correspondiente para sacar los datos en meses dias y anios
    anioac = 2023 - anio;
    mesac = 12 - mes;
    diac = 30 - dia; 
    cout << "La persona tiene ==> "<< anioac << " anios , "<< mesac << " meses y "<< diac << " dias de edad"<< endl;
    return 0;
}
/*
Una empresa que contrata personal requiere determinar la edad de las personas en años, meses 
y días que solicitan trabajo para ese día, cuando se les realiza la entrevista sólo se les pregunta
el día, mes y año en que nacieron. Realice un algoritmo en diagrama de flujo. 
*