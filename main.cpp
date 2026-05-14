#include "TempConvert.h"
#include <iostream>

int main() {
    // Simple grab the temperature from standard input
    double tempF = 0.0;
    std::cout << "Fahrenheit: ";
    std::cin >> tempF;
    std::cout << std::endl;
    TempConverter tc = TempConverter(); // Note each conversion replaces query data
    tc.Fahrenheit(tempF); // Convert, then show output
    std::cout << "Celsius:    " << tc.Celsius() << std::endl;
    std::cout << "Fahrenheit: " << tc.Fahrenheit() << std::endl;
    std::cout << "Kelvin:     " << tc.Kelvin() << std::endl << std::endl;
    // Maybe solid state drive temperature?
    if (tc.Celsius() > 30.0 && tc.Celsius() < 50.0) {
        std::cout << "SSD: Normal" << std::endl;
    } else if (tc.Celsius() >= 70.0) {
        std::cout << "SSD: Danger" << std::endl;
    }
    std::cout << std::endl;
    // More compact, Convert then query output
    std::cout << "Boiling Water: " << tc.Celsius(100.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "Burning Books: " << tc.Fahrenheit(451.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "Absolute Zero: " << tc.Kelvin(0.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "On the Moon (Daylight): " << tc.Fahrenheit(250.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    std::cout << "On the Moon (Nightfall): " << tc.Fahrenheit(-208.0).Celsius() << "C " << tc.Fahrenheit() << "F " << tc.Kelvin() << "K" << std::endl;
    return 0;
}