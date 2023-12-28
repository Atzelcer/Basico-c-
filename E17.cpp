#include <iostream>
using namespace std;
int main (){
    int numero;
    while (numero < 1 || numero > 5){
        cout << "Enter a number between 1 and 5: "; cin >> numero ;
    }
    switch(numero){
        case 1 : cout << "The number is one ";break ;
        case 2 : cout << "The number is two "; break ;
        case 3 : cout << "The number is three "; break ;
        case 4 : cout << "The number is four "; break ;
        case 5 : cout << "The number is five "; break ;
        default : cout << "The number is not between 1 and 5 "; break ;
    }
    return 0;
}