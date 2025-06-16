#include <iostream>
#include <cstring>

using namespace std;

char aMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

bool esValido(char c) {
    return (c >= 'a' && c <= 'z') || 
           (c >= 'A' && c <= 'Z') || 
           (c >= '0' && c <= '9');
}

int main() {
    char texto[100];
    char limpio[100]; // Donde vamos a guardar los caracteres válidos
    int j = 0;

    cout << "Ingresa una cadena: ";
    cin.getline(texto, 100);

    // Filtrar: solo letras y números, convertir a minúsculas
    for (int i = 0; texto[i] != '\0'; i++) {
        if (esValido(texto[i])) {
            limpio[j++] = aMinuscula(texto[i]);
        }
    }
    limpio[j] = '\0'; // Terminar cadena limpia

    // Verificar si es palíndromo
    bool esPalindromo = true;
    int inicio = 0;
    int fin = j - 1;
    while (inicio < fin) {
        if (limpio[inicio] != limpio[fin]) {
            esPalindromo = false;
            break;
        }
        inicio++;
        fin--;
    }

    if (esPalindromo) {
        cout << "La cadena SI es un palindromo." << endl;
    } else {
        cout << "La cadena NO es un palindromo." << endl;
    }

    //Hola

    return 0;
}
