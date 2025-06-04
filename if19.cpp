#include <iostream>
using namespace std;

/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

int main()
{
    // DECLARACION DE VARIABLE
    int Consumo;

    // PEDIMOS AL USUARIO QUE INGRESE SU CONSUMO EN KWh
    cout << "Ingrese el consumo de su energia en KWh" << endl;
    cin >> Consumo;

    // HACEMOS LA FUNCIONALIDAD DEL SISTEMA
    if (Consumo < 0) // VALIDACION DE QUE NO INGRESE VALORES NEGATIVOS
    {
        cout << "Los valores ingresados son invalidos" << endl;
        return 1;
    }
    else if (Consumo >= 1 && Consumo < 100)
    {
        cout << "Su tarifa de consumo es de $25" << endl;
    }
    else if (Consumo >= 100 && Consumo <= 200)
    {
        cout << "Su tarifa de consumo es de $50" << endl;
    }
    else
    {
        cout << "Su tarifa de consumo es de $100" << endl;
    }

    return 0;
}