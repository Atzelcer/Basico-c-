#include <iostream>
using namespace std;
int main(){
    float desccomplet,uni,art;
   // 40$ por unidada
    cout << "Inserte la cantidad de articulos que desea adquirir : ";cin >> art;
    uni = art * 40;
    desccomplet = uni - (uni * 0.05);
    cout << "El precio total sera de : "<< uni << endl;
    cout << "El precio final a pagar es de : "<< desccomplet << "$ junto con el descuento y el iva "<< endl;

    return 0;
}
/*
3. Realice algoritmo en diagrama de flujo para determinar cuánto pagará finalmente una persona por
un artículo equis cuyo valor se conoce y está adquiriendo n unidades, considerando que tiene un
descuento del 20%, y debe pagar 15% de IVA, calcular y mostrar el monto total y el precio final
con descuento e iva. 
4. Realice un algoritmo
*/