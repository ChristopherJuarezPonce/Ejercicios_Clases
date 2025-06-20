#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Calculate and display the sum
    int result = sum(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
