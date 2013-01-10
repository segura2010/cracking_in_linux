#include <iostream>
#include <string.h>
using namespace std;

int main(){

char palabra[50];

cout << "Cual es la contrasenia ?? " << endl;
cin >> palabra;

if (!strcmp(palabra,"alfffamola")){
    cout<< "Yeeeeahh!! Tu tambien molas" <<endl;
}
else
    cout<< "Pues esa no es la contrasenia" <<endl;
return 0;
}
