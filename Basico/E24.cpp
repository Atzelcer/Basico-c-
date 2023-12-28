#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Inserte su edad : ";cin >> edad ;
    if (edad >= 18 && edad <= 25){
        cout << "Su edad esta dentro de 18 y 25 "<< endl;
    }else {
        cout << "Su edad no esta dentro del rango establecido "<< endl; 
    }
    return 0;
}