#include <iostream>
using namespace std;
int main(){
    char let;
    cout << "Inserte una vocal : ";cin>> let;
    switch(let){
        case 'a':
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': cout << "Es vocal minuscula"; break;
        default: cout << "No es vocal"; break;
    }
    return 0;
}