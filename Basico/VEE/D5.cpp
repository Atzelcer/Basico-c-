#include<iostream>
using namespace std;
void lec(int &x);
void ope(int x, int d, int re[]);
void pro(int re[], int x, int d);
void prex(int re[], int x,int d, int f);

int main() {
	int d,x;
	lec(x);
	int *re = new int[x];
	d = 0;
	cout << "INSERTE NUMEROS CON 2 DIGITOS" << endl;
	ope(x,d,re);
	pro(re,x,d);
	return 0;
}

void lec(int &x) {
	cout << "INSERTE LA CANTIDAD DE INDICES DEL VECTOR" << endl;
	cin >> x;
	if (x<=0) {
		lec(x);
	}
}

void ope(int x, int d, int re[]) {
	int n;
	if (x!=0) {
		do {
			cout << "INSERTE EL " << d+1 << "° NUMERO" << endl;
			cin >> n;
		} while (!(n>9 && n<100));
		re[d] = n;
		ope(x-1,d+1,re);
	}
}

void pro(int re[], int x, int d) {
	int f;
	for (d=0;d<=x-1;d++) {
		cout << d+1 << ")  [" << re[d] << "]" << endl;
	}
	cout << "LOS ELEMENTOS DEL VECTOR AL REVES " << endl;
	d = 0;
	f = x-1;
	prex(re,x,d,f);
}

void prex(int re[],int x,int d, int f) {
	if (x!=d) {
		cout << f+1 << ")   [" << re[f] << "]" << endl;
		prex(re,x-1,d,f-1);
	}
}

