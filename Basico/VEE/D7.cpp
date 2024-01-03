/*
Desarrolle un algoritmo en diagrama de flujo que lea un número entero positivo de 3 dígitos
(validar) y muestre sus dígitos individualmente de menor a mayor. Use selectivas dobles. 
*/




#include <iostream>
using namespace std;


int lectura(string men,int &x);
void proceso(int x,int re[],int p);
void complemento(int x,int &j, int &u);
void finality(int re[]);


	int main (){
		int x;
		lectura("Inserte un numero de tres digitos : ",x);
		int *re = new int[3];
		proceso(x,re,3);
		finality(re);
		cout << endl ;
		for(int i=0;i<3;i++){
			cout << i+1 << ") "<<re[i]<< endl;
		}
		delete[] re;
		return 0;
	}
	
	
	int lectura(string men, int &x){
		cout << men ; cin >> x;
		if(x <= 99 || x >= 1000){
			if( x <= 0){
				cout<< "El numero de ser entero positivo."<< endl;	
			}else if(x <= 99 ){
				cout << "El numero de tener tres digitos."<< endl;
			}else {
				cout << "El nu`mero de tener tres digitos."<< endl;
			}
			lectura(men,x);
		}
		return x;
	}
		

	void proceso(int x,int re[],int p){
		int j,u;
		if(p != 0){
		complemento(x,j,u);
		x = j;
		re[p-1] = u;
		proceso(x,re,p-1);
		}	
	}


	void complemento(int x,int &j,int &u){
		u = x % 10;
		j = int(x/10);
	}

    // 719
   // re[0] = 7 ```   re[1] = 1 ```` re[2] = 9
	void finality(int re[]){
		int p;
		for(int i = 0;i < 3;i++){
			for(int j = 0;j<3;j++){
				if(re[i]<re[j]){
					p = re[i];
					re[i] = re[j];
					re[j] = p;
				}

			}
		}
	}

		
	
