#include <iostream>
using namespace std;
int main ()
{
    int x,y,inter;
    cout << "Insete x : "; cin >> x;
    cout << "Inserte y : "; cin >> y;
    inter = x;
    x = y;
    y = inter;
    cout << "El nuevo valor de x es : "<< x << endl;
    cout << "El nuevo valor de y es : "<< y << endl;


    return 3;

}