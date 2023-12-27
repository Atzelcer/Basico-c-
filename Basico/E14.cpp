#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "Inserte la primera variable : "; cin >> x;
    cout << "Inserte la segunda variable : "; cin >> y;
    cout << "\nEl resulatado siguiendo la expresion de sqrtx/y^2-1 ==>  "<< (sqrt(x))/(pow(y,2)-1)<< endl;

    return 0;
}