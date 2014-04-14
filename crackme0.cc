#include <iostream>
#include <string.h>
using namespace std;

int main(){

char palabra[50];

cout << "Cual es la contrasenia ?? " << endl;
cin >> palabra;

if (!strcmp(palabra,"alfffamola")){
    cout<< "Enhorabuena el password es el correcto!!" <<endl;
}
else
    cout<< "Password incorrecto!!" <<endl;
return 0;
}
