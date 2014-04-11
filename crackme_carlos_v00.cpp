#include <iostream>
using namespace std;

// funciones:
// #########################################

// el tipo es lo que devuelve:
bool comprobacion(string comp1, string comp2) {
    if ( comp1 != comp2 ) return true;
    return false;
}

// el tipo es lo que devuelve:
string invertir(string caracteres) {
    string resultado;
    for (int i = caracteres.size() - 1; i >= 0 ; --i) resultado = resultado + caracteres[i];
    return resultado;
}


// main:
// ###########################################
int main() {

    string chars = "all232";
    string entrada;
    cout << "Inserte la clave" << endl;
    cin >> entrada;

    if ( not comprobacion(entrada, invertir(chars))) {
        cout << "Enhorabuena!" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
