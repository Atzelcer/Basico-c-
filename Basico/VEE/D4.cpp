#include <iostream>
using namespace std;

int main(){
    int x=2;
    int *re = new int[x];
    for(int i=0;i<=x;i++){
        cout << "Inserte el "<< i+1 << " numero : ";cin >> re[i];
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<=x;j++){
            if(re[i]<re[j]){
                int aux = re[i];
                re[i] = re[j];
                re[j] = aux;
            }
        }

    }
    for(int i=0;i<=x;i++){
        cout << i+1 <<")  "<<re[i] << endl;
    }
    
    return 0;
}
//	int *re = new int[x];

/*
5.  Desarrolle un algoritmo en pseudocódigo para que lea 3 números enteros positivos de un 
digito validados y se desea mostrar de menor a mayor los números que se puedan formar en
tres variables con los tres dígitos juntos introducidos por teclado. Con selectiva simple. 
*/