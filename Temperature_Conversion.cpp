
#include <iostream>
using namespace std;

void convertTemperature() {
    double tempValue;
    char tempUnit;
    cout << "Temperature Conversion Program" << endl;
    cout << "-------------------------------" << endl;

    // Get user input for temperature value and unit
    cout << "Enter temperature value: ";
    cin >> tempValue;
    cout << "Enter temperature unit (C/F/K): ";
    cin >> tempUnit;

    // Convert temperature to other units
    if (toupper(tempUnit) == 'C') {
        double fahrenheit = (tempValue * 9.0 / 5.0) + 32.0;
        double kelvin = tempValue + 273.15;
        cout << tempValue << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin." << endl;
    }
    else if (toupper(tempUnit) == 'F') {
        double celsius = (tempValue - 32.0) * 5.0 / 9.0;
        double kelvin = (tempValue - 32.0) * 5.0 / 9.0 + 273.15;
        cout << tempValue << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius and " << kelvin << " Kelvin." << endl;
    }
    else if (toupper(tempUnit) == 'K') {
        double celsius = tempValue - 273.15;
        double fahrenheit = (tempValue - 273.15) * 9.0 / 5.0 + 32.0;
        cout << tempValue << " Kelvin is equal to " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit." << endl;
    }
    else {
        cout << "Invalid temperature unit. Please enter C, F, or K." << endl;
    }
}

int main() {
    convertTemperature();
    return 0;
}