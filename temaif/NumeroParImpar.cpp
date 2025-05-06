#include <iostream>
using namespace std;

// Solicita un número al usuario y determina si es par o impar.

int main()
{

    // Declare the variable to be used in the program
    int Number;

    // Ask the user to enter an integer number
    cout << "Please enter an integer number:" << endl;
    cin >> Number; // This is where the entered number will be stored

    // Use an if statement to determine if the number is even or odd
    if (Number % 2 == 0)
    {
        cout << "The number (" << Number << ") is an even number." << endl;
    }
    // If the remainder of the division by two is 1, the number is odd
    else if (Number % 2 == 1)
    {
        cout << "The number (" << Number << ") is an odd number." << endl;
    }
    // Displays a message if the character is invalid (this is unlikely to be triggered in this case)
    else
    {
        cout << "Invalid characters entered." << endl;
        return 1;
    }

    return 0;
}