#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass("topsecret");
    string input;

    cout << "Password? ";
    cin >> input;

    if(pass == input)
        cout << "Enhorabuena el password es el correcto!!" << endl;
    else
        cout << "Password incorrecto!!" << endl;

    return 0;
}
