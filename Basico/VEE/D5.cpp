/*
 Desarrolle un algoritmo en pseudocódigo para que lea 3 números enteros positivos de un 
digito validados y se desea mostrar de menor a mayor los números que se puedan formar en
tres variables con los tres dígitos juntos introducidos por teclado.
*/

#include <iostream>
using namespace std;
void leer(string m , int &x);
void proceso(int a, int b, int c );
int main (){
	int a,b,c;
	leer("Inserte el Primer Numero : ",a);
	leer("Inserte el Segundo Numero : ",b);
	leer("Inserte el Tercer Numero : ",c);
	cout << "El orden de los numeros de mayor a menor es : " << endl;
	proceso(a,b,c);
	return 0;
}


void leer(string m, int &x){
	cout << m ; cin >> x;
	if (x <= 0){
		cout << "\nEl numero debe de ser un entero positivo. "<< endl;
		leer(m,x);
	}
}

void proceso(int a,int b, int c){
	if(7<1){
		cout << "11111111111fdasasdf"<< endl;
	}
	if (a > b && a > c ){
		if (b > c){
			cout << a << ", " << b << ", " << c << endl;
		}else{
			cout << c << ", " << b << endl;
		}
	}else if (b > a && b > c ){
		if (a > c ){
			cout << b << ", " << a << ", " << c << endl;
		}else {
			cout << b << ", " << c << ", " << a << endl;
		}
	}else if (c > a && c > b ){
		if (b > a ){
			cout << c << ", " << b << ", " << a << endl;
		}else {
			cout << c << ", " << a << ", " << b << endl;
		}
	}
}