#include <iostream>
using namespace std;

// Escribe un programa que pida la edad de una persona e indique si es mayor o menor de edad
//(18 años o más es mayor de edad).

int main()
{

    // Declare the variables to be used throughout the program
    int Age;

    // Ask the user to enter their age
    cout << "Please enter your age:" << endl;
    cin >> Age; // This is where the entered age will be stored

    // Validate that the age is 18 or older to be considered an adult
    if (Age >= 18)
    {
        cout << "Your age is (" << Age << "), therefore you are an adult." << endl;
    }
    // Validate that if the age is less than 18 and greater than 0, the person is a minor
    else if (Age > 0 && Age < 18)
    {
        cout << "Your age is (" << Age << "), therefore you are a minor." << endl;
    }
    // If invalid characters or values are entered, display an error
    else
    {
        cout << "Invalid characters entered." << endl;
        return 1;
    }

    return 0;
}
