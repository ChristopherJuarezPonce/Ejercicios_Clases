#include <iostream>
using namespace std;

/*Días en un Mes
Pide el número de un mes y muestra cuántos días tiene.*/

int main()
{
    // DECLARACION DE LAS VARIABLES
    int MenuMes;

    // HACEMOS EL NUMERO PARA ELEGIR EL MES
    cout << "----------Menu del mes-----------" << endl;
    cout << "---------------------------------" << endl;
    cout << "|1. Enero                       |" << endl;
    cout << "|2. Febrero                     |" << endl;
    cout << "|3. Marzo                       |" << endl;
    cout << "|4. Abril                       |" << endl;
    cout << "|5. Mayo                        |" << endl;
    cout << "|6. Junio                       |" << endl;
    cout << "|7. Julio                       |" << endl;
    cout << "|8. Agosto                      |" << endl;
    cout << "|9. Septiembre                  |" << endl;
    cout << "|10. Octubre                    |" << endl;
    cout << "|11. Noviembre                  |" << endl;
    cout << "|12. Diciembre                  |" << endl;
    cout << "---------------------------------" << endl;
    cin >> MenuMes;

    // HACEMOS EL MENU PARA SABER LOS DIAS
    switch (MenuMes)
    {
    case 1:
        cout << "El mes de enero tiene 31 dias" << endl;
        break;
    case 2:
        cout << "El mes de febrero tiene 28 dias" << endl;
        break;
    case 3:
        cout << "El mes de marzo tiene 31 dias" << endl;
        break;
    case 4:
        cout << "El mes de abril tiene 30 dias" << endl;
        break;
    case 5:
        cout << "El mes de mayo tiene 31 dias" << endl;
        break;
    case 6:
        cout << "El mes de junio tiene 30 dias" << endl;
        break;
    case 7:
        cout << "El mes de julio tiene 31 dias" << endl;
        break;
    case 8:
        cout << "El mes de agosto tiene 31 dias" << endl;
        break;
    case 9:
        cout << "El mes de Septiembre tiene 30 dias" << endl;
        break;
    case 10:
        cout << "El mes de Octubre tiene 31 dias" << endl;
        break;
    case 11:
        cout << "El mes de Noviembre tiene 30 dias" << endl;
        break;
    case 12:
        cout << "El mes de Diciembre tiene 31 dias" << endl;
        break;

    default:
        cout << "Valor invalido" << endl;
        break;
    }

    return 0;
}