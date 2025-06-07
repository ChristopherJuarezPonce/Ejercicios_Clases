#include <iostream>
using namespace std;

int main()
{
    const int N = 5; // Tamaño fijo del arreglo
    int numeros[N];  // Arreglo de 5 enteros
    int suma = 0;    // Acumulador de la suma

    // Pedir al usuario los 5 números
    for (int i = 0; i < N; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i]; // Guardar en el arreglo
    }

    // Sumar los elementos del arreglo
    for (int i = 0; i < N; i++)
    {
        suma += numeros[i]; // Sumar cada elemento
    }

    // Mostrar el resultado
    cout << "La suma de los 5 numeros es: " << suma << endl;

    return 0;
}
