#include <iostream>
using namespace std;
 

class Cuadrado {
    
    public:
        float base;
        float altura;

        Cuadrado(float b,float a){
            this-> base = b;
            this-> altura = a;
        }
        float CalcularArea(){
            return this-> altura * this->base;
        }
};


int main(){
    float b,a;
    cout << "Inserte la base del Cuadrado : ";cin >> b;
    cout << "Inserte la altura del Cuadrado : ";cin >> a;
    Cuadrado C = Cuadrado(b,a);
    cout <<"El area del cuadrado es ==> " <<C.CalcularArea() << endl;
    cin.get();
    
}