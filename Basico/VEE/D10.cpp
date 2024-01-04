/* Desarrolle un algoritmo en diagrama de flujo para lo siguiente, si dados tres números por 
teclado se desea:  a) Hallar la diferencia del mayor menos el menor.  b) Hallar la diferencia
del medio menos el menor.  c) Si los tres son iguales debe desplegar un mensaje, y no debe
efectuar ninguna operación.  d) Si dos números son iguales desplegar un mensaje, entonces
se deberá efectuar el producto del número igual con el número diferente y no se deberá
realizar ninguno de los anteriores incisos. Use selectivas doble. 
*/


#include <iostream>
using namespace std;

int lectura(string men);
void proceso(int x,int y,int z);

int main(){
	int x,y,z;
	x = lectura("Inserte el Primer numero : ");
	y = lectura("Inserte el Segundo numero : ");
	z = lectura("Inserte el Tercer numero : ");
	proceso(x,y,z);
	return 0;
}
	
	int lectura(string men){
		int a;
		cout << men ; cin >> a; 
		if(a <= 0){
			cout << "Debe de insetar un numero entero positivo. "<< endl; 
			lectura(men);
		}
		return a;
	}

	void proceso(int x,int y,int z){
		int mayor,medio,menor;
		if(x == y && x == z && y == z){
			cout << "Los trea numeros son iguales. "<< endl;
		}else if(x == y || x == z || y == z){
			if (x == y){
				cout << "El producto del numero igual con el diferente es de ==> " << x * z;
			}else if(y == z){
				cout << "El producto del numero igual con el diferente es de ==> " << y * x;
			}else if(x == z){
				cout << "El producto del numero igual con el diferente es de ==> " << z * y;
			}
		}else if(x > y && x > z ){
			mayor = x;
			if(y < z){
				menor = y;
				medio = z;
			}else{
				menor = z;
				medio = y;
			}
			cout << "En orden ===> " << mayor << " - "<< medio <<" - "<< menor << endl;
			cout << "La diferencia del mayor menos el menor es ===> " << mayor - menor << endl;
			cout << "La diferencia del medio menos el menor es ===> " << medio - menor << endl;
		}else if(y > x && y > z ){
			mayor = y;
			if(x < z){
				menor = x;
				medio = z;
			}else{
				menor = z;
				medio = x;
			}
			cout << "En orden ===> " << mayor << " - "<< medio <<" - "<< menor << endl;
			cout << "La diferencia del mayor menos el menor es ===> " << mayor - menor << endl;
			cout << "La diferencia del medio menos el menor es ===> " << medio - menor << endl;
		}else if(z > x && z > y){
			mayor = z;
			if(x < y){
				menor = x;
				medio = y;
			}else{
				menor = y;
				medio = x;
			}
			cout << "En orden ===> " << mayor << " - "<< medio <<" - "<< menor << endl;
			cout << "La diferencia del mayor menos el menor es ===> " << mayor - menor << endl;
			cout << "La diferencia del medio menos el menor es ===> " << medio - menor << endl;
		}
		
	}	
