#include <iostream>
using namespace std;

int main(){
    double a,b,c,d,e,f;
    cout << "Vaya insertando las variables a,b,c,d,e,f"<< endl;
    cout << "Inserte a : ";cin >> a;
    cout << "Inserte b : ";cin >> b;
    cout << "Inserte c : ";cin >> c;
    cout << "Inserte d : ";cin >> d;
    cout << "Inserte e : ";cin >> e;
    cout << "Inserte f : ";cin >> f;
    cout<< endl;
    cout.precision(4);
    cout << "Siguiendo la expresion a+b/c/d+e/f tenemos :"<< endl;
    cout << "El resultado correspondiente es ==>  "<<(a+(b/c))/(d+(e/f))<<endl;

    return 0;

}