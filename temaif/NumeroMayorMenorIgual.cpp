#include <iostream>
using namespace std;

// Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.
int main()
{
    // Declare the variables to be used in the program
    int Number1, Number2;

    // Ask the user to enter the first integer
    cout << "Enter the first integer number:" << endl;
    cin >> Number1; // This is where the first integer is stored

    // Ask the user to enter the second integer
    cout << "Enter the second integer number:" << endl;
    cin >> Number2; // This is where the second integer is stored

    // Use if to check if the first number is greater
    if (Number1 > Number2)
    {
        cout << "The first number entered (" << Number1 << ") is greater than the second number (" << Number2 << ")." << endl;
    }
    // Use else if to check if the second number is greater
    else if (Number2 > Number1)
    {
        cout << "The second number entered (" << Number2 << ") is greater than the first number (" << Number1 << ")." << endl;
    }
    // Use else if to check if the numbers are equal
    else if (Number1 == Number2)
    {
        cout << "The numbers entered are equal." << endl;
    }
    // Use else to handle invalid characters (though this is unlikely here)
    else
    {
        cout << "Invalid characters entered." << endl;
        return 1;
    }

    return 0;
}