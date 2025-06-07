#include <iostream>
using namespace std;

int main() {
    int numero, factorial = 1;

    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no se puede calcular para numeros negativos." << endl;
        return 1;
    }

    for (int i = 1; i <= numero; i++) {
        factorial *= i;  // factorial = factorial * i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}
