#include <iostream>
using namespace std;

// Solicita un número del 1 al 7 y muestra si corresponde a un día laboral (lunes a viernes) o fin de semana (sábado y domingo).

int main()
{

    // Declare the variable to store the user's input
    int Days;

    // Ask the user to enter a number that represents a day of the week
    cout << "Enter a number (1 to 7) to identify the corresponding day of the week:" << endl;
    cin >> Days;

    // Use if-else statements to match the number to the correct day
    if (Days == 1)
    {
        cout << "The entered number (" << Days << ") corresponds to Monday." << endl;
    }
    else if (Days == 2)
    {
        cout << "The entered number (" << Days << ") corresponds to Tuesday." << endl;
    }
    else if (Days == 3)
    {
        cout << "The entered number (" << Days << ") corresponds to Wednesday." << endl;
    }
    else if (Days == 4)
    {
        cout << "The entered number (" << Days << ") corresponds to Thursday." << endl;
    }
    else if (Days == 5)
    {
        cout << "The entered number (" << Days << ") corresponds to Friday." << endl;
    }
    else if (Days == 6)
    {
        cout << "The entered number (" << Days << ") corresponds to Saturday." << endl;
    }
    else if (Days == 7)
    {
        cout << "The entered number (" << Days << ") corresponds to Sunday." << endl;
    }
    else if (Days == 0)
    {
        // Although 0 is explicitly checked, it doesn't correspond to any day of the week
        cout << "The entered number (" << Days << ") does not correspond to any day of the week." << endl;
    }
    else
    {
        // Handle input that is not between 0 and 7
        cout << "Invalid input." << endl;
        return 1;
    }

    return 0;
}