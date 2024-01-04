/*  Desarrolle un algoritmo en diagrama de flujo para leer por teclado 3 notas parciales diferentes,
se desea saber que parcial tiene la mayor nota, y calcular el promedio de las otras 2 notas. 
Mostrar los resultados
*/
#include <iostream>
using namespace std;
void lectura(string men, int &a,int p,int r );
void detector(int x,int y ,int z);

int main(){
    int x,y,z,p,r;
    lectura("Inserte el primera nota parcial : ",x,0,1);p=x;r=x;
    lectura("Inserte el segunda nota parcial : ",y,p,0);p=y;
    lectura("Inserte el tercera nota parcial : ",z,p,r);
    detector(x,y,z);
    cout << "~~~~~~~~~~~~~~~~~~~~~~324234121324de las otras 2 notas es ==>~~~"<< endl;
    return 0;
}

void lectura(string men, int &a,int p,int r){
    cout<< men ; cin >> a;
    if( a <= 0 ){
        lectura(men,a,p,r);
    }else if( a == r || a == p || r == p ){
        cout << "Las notas deben de ser diferentes ."<< endl;
        lectura(men,a,p,r);
    }
}
void detector(int x,int y ,int z){
    if( x > y && x > z ){
        cout << "La nota mayor es ==> "<< x << endl;
        cout << "El promedio de las otras 2 notas es ==> : "<< (y+z)/2 << endl;
    }else if( y > x && y > z ){
        cout << "La nota mayor es ==> "<< y << endl;
        cout << "El promedio de las otras 2 notas es ==>"<< (x+z)/2 << endl;
    }else if( z > x && z > y ){
        cout << "La nota mayor es ==> "<< z << endl;
        cout << "El promedio de las otras 2 notas es ==> "<< (x+y)/2 << endl;
    }

}