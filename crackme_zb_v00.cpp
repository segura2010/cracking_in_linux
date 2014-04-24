#include <iostream>
using namespace std;

// prototipado:
string consulta(void); // consulta del pass al usuario
string msj(int); // mensajes de respuesta
bool test(string); // comprobacion del pass

// main:
int main(){
    string m = "";
    if ( test( consulta() ) ){
        m = msj(1);
    } else {
        m = msj(2);
    }
    cout << m << endl;
    return 0;
}

// funciones:
string consulta(void){
    string uinput;
    cout << "Inserte la clave" << endl;
    cin >> uinput;
    return uinput;
}

string msj(int i){
    if ( i == 1 ){
        string m = "Correcto!!";
        return m;
    } else {
        string m = "Incorrecto!!";
        return m;
    }
}

bool test(string i){
    string sc = "superpass";
    if ( i == sc ){
        return true;
    }
}
