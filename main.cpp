#include "TempConvert.h"
#include <iostream>

int main() {
    double tempF = 78.0;
    TempConverter tc = TempConverter(); // Note each conversion replaces query data
    tc.Fahrenheit(tempF); // Convert, then show output
    std::cout << tempF << " Fahrenheit is..." << std::endl;
    std::cout << "Celsius:    " << tc.Celsius() << std::endl;
    std::cout << "Fahrenheit: " << tc.Fahrenheit() << std::endl;
    std::cout << "Kelvin:     " << tc.Kelvin() << std::endl << std::endl;
    // More compact, Convert then query output
    std::cout << "Boiling Water: " << tc.Celsius(100.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "Burning Books: " << tc.Fahrenheit(451.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "Absolute Zero: " << tc.Kelvin(0.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "On the Moon (Daylight): " << tc.Fahrenheit(250.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "On the Moon (Nightfall): " << tc.Fahrenheit(-208.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    return 0;
}