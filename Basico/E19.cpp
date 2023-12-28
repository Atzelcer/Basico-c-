#include <iostream>
using namespace std;
int main (){
    int num1 ,num2, num3;
    cout << "Enter the one number : "; cin >> num1;
    cout << "Enter the second number : "; cin >> num2;
    cout << "Enter the third number : "; cin >> num3;
    if (num1 == num2 && num1 == num3){
        cout << "Los tres numeros son iguales " << endl;
    }else{
        if (num1 > num2 && num1 > num3){
            cout << "El primer numero es el mayor " << endl;
        }else if (num2 > num1 && num2 > num3){
            cout << "El segundo numero es el mayor " << endl;
    }else if (num3 > num1 && num3 > num2){
        cout << "El tercer numero es el mayor " << endl;
    }
    }
    return 0;
}