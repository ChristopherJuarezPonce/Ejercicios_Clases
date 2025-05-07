#include <iostream>
#include <cmath>
using namespace std;

/*Desarrolle un programa en c++ que solicite al usuario ingresar su salario mensual bruto y luego realice los siguientes calculos:
Descuentos obligatorios:
1. Seguro social (ISSS): 3% del salario con un tope maximo de 30 dolares solo aplica hasta mil dolares.
2. AFP es el 7.25% del salario.
3. Renta se calcula sobre el salario neto, despues del seguro social y afp, usando la siguiente tabla:
Salario neto despues de ISSS Y AFP    ISR a aplicar
Hasta 472.00                          Extento
De 472.01 a 895.24                        10%
De 895.25 a 2,038.10                      20%
mas de 2, 038.10                          30%

Resultado:
Ingrese su salario
Que desee calcular
-------Menu-------
1. ISSS          |
2. AFP           |
3. Renta         |
4. Total = Su saldo actual: su saldobruto -impuestos
5. Salir
*/

int main()
{
    // Declaramos las variables a utilizar
    int menu;
    double salario, salarioNeto, descuentoISSS, descuentoAFP, descuentoRenta, totalDescuento, salarioFinal;

    // Le pedimos al usuario que ingrese los datos de su salario
    cout << "Ingrese su salario: $ ";
    cin >> salario;

    // Validación para que no ingrese un salario negativo
    if (salario <= 0)
    {
        cout << "Los datos ingresados no son validos." << endl;
        return 1;
    }

    // Hacemos el menu
    cout << "Seleciona el descuento a realizar" << endl;
    cout << "--------Menu--------" << endl;
    cout << "1. ISSS            |" << endl;
    cout << "2. AFP             |" << endl;
    cout << "3. Renta           |" << endl;
    cout << "4. Total           |" << endl;
    cout << "5. Salir           |" << endl;
    cout << "--------------------" << endl;
    cin >> menu;

    // Calculamos ISSS
    if (salario <= 1000)
    {
        descuentoISSS = salario * 0.03;
    }
    else
    {
        descuentoISSS = 30.0; // El descuento maximo va ser de 30 dolares si el salario pasa de 1000
    }

    // Calculamos AFP
    descuentoAFP = salario * 0.0725;

    // Salario neto después de ISSS y AFP
    salarioNeto = salario - descuentoISSS - descuentoAFP;

    // Calculamos Renta
    if (salarioNeto <= 472.00) // Validamos que si el slario es menor de $472.00 la renta cera de 0
    {
        descuentoRenta = 0.0;
    }
    else if (salarioNeto <= 895.24) // Validamos el salario menor a 895.24 el descuento es de 10%
    {
        descuentoRenta = (salarioNeto - 472.00) * 0.10;
    }
    else if (salarioNeto <= 2038.10) // Validamos el salario menor a 895.24 el descuento es de 20%
    {
        descuentoRenta = (salarioNeto - 895.24) * 0.20;
    }
    else
    {
        descuentoRenta = (salarioNeto - 2038.10) * 0.30; // Validamos el salario menor a 895.24 el descuento es de 30%
    }

    // Apartado para calcular el salario final del usuario despues de descuentos
    totalDescuento = descuentoISSS + descuentoAFP + descuentoRenta;
    salarioFinal = salario - totalDescuento;

    // Usamos switch para la opciones del menu
    switch (menu)
    {
    case 1: // Caso 1 es para calcular el ISSS
        cout << "Descuento ISSS: $" << descuentoISSS << endl;
        break;
    case 2: // Caso 2 es para calcular el AFP
        cout << "Descuento AFP: $" << descuentoAFP << endl;
        break;
    case 3: // Caso 3 es para calcular la Renta
        cout << "Descuento de renta (ISR): $" << descuentoRenta << endl;
        break;
    case 4: // Caso 4 es para calcular el total
        cout << "--------Descuentos--------" << endl;
        cout << "Salario bruto: $" << salario << endl;
        cout << "ISSS: $" << descuentoISSS << endl;
        cout << "AFP: $" << descuentoAFP << endl;
        cout << "Renta (ISR): $" << descuentoRenta << endl;
        cout << "------------------------" << endl;
        cout << "Salario neto final: $" << salarioFinal << endl;
        break;
    case 5: // Caso 5 es para salir del programa
        cout << "Muchas gracias. ¡Feliz día!" << endl;
        return 0;
    default: // Validacion de opcion no valida
        cout << "Opción no válida." << endl;
        return 1;
    }

    // Fin del programa
    return 0;
}