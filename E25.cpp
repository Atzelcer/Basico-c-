#include <iostream>
using namespace std;
int main (){
    int a,b,c,d,x=0;
    while(x<=3){
        if (x == 0){
            cout << "Inserte el "<< x + 1 << " numero : "; cin >> a;
        }
        if (x == 1){
           cout << "Inserte el "<< x + 1 << " numero : ";cin >> b;
        }
        if (x == 2){
            cout << "Inserte el " << x + 1 << " numero : "; cin >> c;
        }
        if (x == 3){
            cout << "Inserte el " << x + 1 << " numero : "; cin >> d;
        }
        x = x + 1;
    }
    if (a == b || a == c || a == d ){
        cout << "Hay numeros iguales " << endl;
    } else {
        cout << "Ningun numero es igual" << endl;
    }
    cout << "La vida es dolorosa "<< endl;
    cout << "La vida no es dolorosa "<< endl;
    return 0;
}