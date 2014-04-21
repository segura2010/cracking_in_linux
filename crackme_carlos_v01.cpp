#include <iostream>
#include <cstdlib>
using namespace std;

bool comp( string, string, int );

int main() {

    srand(time(NULL));
    int cont = 0;
    int ale;

    string sol = "respuesta";
    string entrada;
    bool acierta = false;

    while (not acierta and cont != 3) {

        ale = (rand() % 3) + 1;
        cout << sol << "? (" << ale << ")" << endl;
        cin >> entrada;
        if (comp(sol, entrada, ale)) acierta = true;

        ++cont;
    }

    if ( acierta ) cout << "Enhorabuena el password es el correcto!!" << endl;
    else cout << "Password incorrecto!!" << endl;

}

bool comp( string sol, string ent, int ran) {

    string real;
    for (int i = ran; i < sol.size() + 1; i += ran) real = real + sol[i - 1];
    if (real == ent) return true;
    return false;

}
