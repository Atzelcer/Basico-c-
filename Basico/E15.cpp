    #include  <iostream>
    #include <cmath>
    using namespace std;

    int main (){
        double a,b,c;
        cout << "Siguiendo la expresion de ax^2 + bx + c = 0 :"<< endl;
        cout << "Inserte la variable a : "; cin >> a;
        cout << "Inserte la variable b : "; cin >> b;
        cout << "Inserte la variable c : "; cin >> c;
        cout << "\nLa solucion positiva de la expresion es ==> "<< (-b+sqrt(pow(b,2)-4*a*c))/2*a ;
        cout << "\nLa solucion negativa de la expresion es ==> "<< (-b+sqrt(b*b-4*a*c))/2*a;

        return 0;
    }