#include <iostream>
using namespace std;

class Repositorio {
public:
    int numberone;
    int numbertwo;

    // Corregir los nombres de los parámetros en el constructor
    Repositorio(int n, int p) {
        this->numberone = n;
        this->numbertwo = p;
    }

    // Cambiar el tipo de retorno de Comparar1 y Comparar2 a void
    void Comparar1() {
        cout << "Inserte su primer numero ==> ";
        cin >> this->numberone;
    }

    void Comparar2() {
        cout << "Inserte su segundo numero ==> ";
        cin >> this->numbertwo;
    }

    void ResultadoFinal() {
        if (this->numberone == this->numbertwo) {
            cout << "|| Los dos numeros son iguales ||" << endl;
        } else {
            cout << "|| Los dos numeros son diferentes ||" << endl;
        }
    }
};

int main() {
    // Cambiar los valores iniciales al crear una instancia de la clase Repositorio
    Repositorio r(0, 0);
    r.Comparar1();
    r.Comparar2();
    r.ResultadoFinal();
    return 0;
}
