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
        cout << "Aqui se ejecuta el juego :-) " << endl;
    else
        cout << "UNREGISTERD!!" << endl;

    return 0;
}
