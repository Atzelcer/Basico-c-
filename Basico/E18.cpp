#include <iostream>
using namespace std;
int main (){
    int num1,num2;
    cout << "Enter the one number : "; cin >> num1;
    cout << "Enter the second number : "; cin >> num2;  
    if (num1 == num2){
        cout << "Ambos numeros son iguales " << endl;
    }else{if (num1 > num2){
        cout << "El primer number is el mayor " << num1 << endl;
        }else{cout << "El segundo number is el mayor " << num2 << endl;}
   
    }
}