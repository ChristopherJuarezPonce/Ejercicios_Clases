#include <iostream>
using namespace std;

// Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).

int main()
{
    // Declare the variables to be used in the program
    int Grade;

    // Prompt the user to enter their grade
    cout << "Enter your grade:" << endl;
    cin >> Grade;

    // Check if the grade is between 60 and 100 — passing range
    if (Grade >= 60 && Grade <= 100)
    {
        cout << "Congratulations! You passed the subject with a grade of (" << Grade << ")." << endl;
    }
    // Check if the grade is between 0 and 59 — failing range
    else if (Grade < 60 && Grade >= 0)
    {
        cout << "You failed the subject with a grade of (" << Grade << ")." << endl;
    }
    // If the input is outside the valid range (negative or above 100), show an error
    else
    {
        cout << "The entered data is invalid." << endl;
        return 1;
    }

    return 0;
}