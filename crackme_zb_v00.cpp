#include <iostream>
using namespace std;

// prototipado:
string consulta(void); // consulta del pass al usuario
string msj(int); // mensajes de respuesta
void print(string); // imprimiendo respuestas
void print2(string); // imprimiendo algo
void print3(string); // imprimiendo algo
bool test(string); // comprobacion del pass

// main:
int main(){
    string m = "";
    
    if ( test( consulta() ) ){
        m = msj(1);
    } 
    else {
        m = msj(2);
    }

    print(m);
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
    } 
    else {
        string m = "Incorrecto!!";
        return m;
    }
}

void print(string m){
    cout << m << endl;
}

void print2(){
    cout << "Me estan imprimiendo desde la funcion2" << endl;
}

void print3(string m){
    cout << "Me estan imprimiendo desde la funcion3" << endl;
}

bool test(string i){
    string sc = "superpass";
    if ( i == sc ){
        return true;
    } 
    else {
        return false;
    }
}
