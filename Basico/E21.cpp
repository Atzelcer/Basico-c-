#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : "; cin >> num;
    if (num == 0){
        cout << "El numero es zero";
    }else if (num > 0){
        cout << "El numero es positivo";
    }else{
        cout << "El numero es negativo";
    }
    return 0;
}