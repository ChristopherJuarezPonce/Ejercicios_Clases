#include <iostream>
using namespace std;

int main()
{
    int numeroSecreto = 10; // El número que debe adivinar el usuario
    int intento;
    int intentos = 0;
    int maxIntentos = 5;

    // Ciclo do-while
    do
    {
        cout << "---Adivina el numero secreto---" << endl;
        cout << "Ingresa un numero entre 1 y 50: ";
        cin >> intento;

        // Incrementa los intentos
        intentos++;

        if (intento > numeroSecreto)
        {
            cout << "El numero es demasiado alto, intentalo de nuevo." << endl;
        }
        else if (intento < numeroSecreto)
        {
            cout << "El numero es demasiado bajo, intentalo de nuevo." << endl;
        }

        // Si ya no quedan intentos, salir del ciclo
        if (intentos >= maxIntentos && intento)
        {
            cout << "Se acabaron los intentos." << endl;
            return 0;
        }

    } while (intento != numeroSecreto);

    cout << "Has adivinado el numero secreto." << endl;
    return 0;
}