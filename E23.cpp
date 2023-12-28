#include <iostream>
using namespace std;

int main(){
    char let;
    cout<<"Inserte una vocal : ";cin>> let;
    switch(let){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minuscula "; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout << "Es una vocal mayuscula"; break;
        default:  cout << "No es una vocal";break;
    }
    return 0;

}