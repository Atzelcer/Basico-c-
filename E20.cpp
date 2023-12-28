#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : "; cin >> num;
    if (num == 0){
        cout << "El numero es cero";
    }else if (num % 2 == 0){
        cout << "El numero es par";
    }else{
        cout << "El numero es impar";
    }
    return 0;
}