#include <iostream>
#include <Palindromo.h>

using namespace std;

int main() {
    char texto[100];

    cout << "Ingresa una cadena: ";
    cin.getline(texto, 100);

    if (esPalindromo(texto)) {
        cout << "La cadena SÍ es un palíndromo." << endl;
    } else {
        cout << "La cadena NO es un palíndromo." << endl;
    }

    return 0;
}
