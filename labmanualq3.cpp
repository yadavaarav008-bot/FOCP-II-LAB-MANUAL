#include <iostream>
using namespace std;

int main()
{
    int choice;
    float celsius, fahrenheit;

    cout << "Temperature Conversion Program\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        cout << "Temperature in Celsius: " << celsius << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9.0 / 5.0) + 32;

        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}