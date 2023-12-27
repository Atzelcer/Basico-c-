#include <iostream>
using namespace std;
int main(){
    double a,b,c,d;
    cout << "Vaya insertando las variables a,b,c,d"<< endl;     
    cout << "Inserter a : ";cin >> a;   
    cout << "Inserte b : ";cin >> b;
    cout << "Inserte c : ";cin >> c;
    cout << "Inserte d : ";cin >> d;    
    cout<< endl;
    cout << "Siguiendo la expresion a + b/c-d tenemos :"<< endl;
    cout << "El resultado de la expresion es ==> "<< a+(b/c-d)<< endl;
    
    return 0;
}