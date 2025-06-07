#include <iostream>
using namespace std;

/*Suma de Dígitos de un Número
Solicita un número al usuario y calcula la suma de sus dígitos.*/

int main()
{
    // DECLARACION DE TODA LAS VARIABLE
    int numero, suma = 0; // PARA ACUMULAR LA SUMA DE LOS DIGITOS

    // PEDIMOS AL USUARIO QUE INGRESE UN NUMERO
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    // VALIDACION PARA QUE EL NUMERO INGRESADO SEA POSITIVO
    if (numero < 0)
    {
        cout << "Por favor ingresa numeros positivos" << endl;
        return 1;
    }

    // Bucle 'for' que se repite mientras 'n' sea mayor que 0
    for (int n = numero; n > 0; n /= 10)
    {
        int digito = n % 10; // Se obtiene el último dígito del número
        suma += digito;      // Se suma ese dígito a la variable 'suma'
        // Luego, al hacer n /= 10, se elimina el último dígito del número
    }

    // Al salir del bucle, se imprime la suma total de los dígitos
    cout << "La suma de los digitos de " << numero << " es: " << suma << endl;

    return 0; // El programa termina correctamente
}
