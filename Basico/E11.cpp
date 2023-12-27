#include <iostream>
using namespace std;
int main (){
    float a,b,c,d;
    cout << "Inserte la nota del primer estudiante : ";cin >> a ;
    cout << "Inserte la nota del segundo estudiante : ";cin >> b ;
    cout << "Inserte la nota del tercer estudiante : ";cin >> c;
    cout << "Inserte la nota del cuarto estudiante : ";cin >> d;
    cout << endl;
    cout.precision(2);
    cout << "La nota media del primer estudiante es ==> " << a/2 << endl;
    cout << "La nota media del segundo estudiante es ==> " << b/2 << endl;
    cout << "La nota media del tercer estudiante es ==> " << c/2 << endl;
    cout << "La nota media del cuarto estudiante es ==> " << d/2 << endl;
    cout << endl; 
    return 0;
}