#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b;
    cout.precision(5);
    cout << "Inserte los catetos de un triangul rectangulo :"<< endl;
    cout << "Inserte el cateto opuesto : "; cin >> a;   
    cout << "Inserte el cateto adyacente : ";cin >> b;  
    cout <<  endl;
    cout << "La hipotenusa del triangulo rectangul es ==> "<< sqrt(pow(a,2) + pow(b,2)) << endl; 

    return 0;
}