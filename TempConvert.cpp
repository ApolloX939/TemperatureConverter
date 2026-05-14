#include "TempConvert.h"

/// @brief Create a base instance with all zeros
TempConverter::TempConverter() {
    celsius = 0.0;
    fahrenheit = 0.0;
    kelvin = 0.0;
}

/// @brief Given Fahrenheit, convert for Celsius and Kelvin
/// @param f Fahrenheit
/// @return self (chaining)
TempConverter& TempConverter::Fahrenheit(double f) {
    fahrenheit = f;
    // C = (F - 32) / 1.8
    celsius = (f - 32.0) / 1.8;
    // Requires celsius first
    // K = C + 273.15
    kelvin = celsius + 273.15;
    return *this;
}

/// @brief Given Celsius, convert for Fahrenheit and Kelvin
/// @param c Celsius
/// @return self (chaining)
TempConverter& TempConverter::Celsius(double c) {
    celsius = c;
    // F = (C * 1.8) + 32
    fahrenheit = (c * 1.8) + 32.0;
    // K = C + 273.15
    kelvin = c + 273.15;
    return *this;
}

/// @brief Given Kelvin, Convert for Celsius and Fahrenheit
/// @param k Kelvin
/// @return self (chaining)
TempConverter& TempConverter::Kelvin(double k) {
    kelvin = k;
    // C = K - 273.15
    celsius = k - 273.15;
    // Requires celsius first
    // F = (C * 1.8) + 32
    fahrenheit = (celsius * 1.8) + 32.0;
    return *this;
}

/// @brief Query the currently converted temperature
/// @return Celsius
double TempConverter::Celsius() {
    return celsius;
}

/// @brief Query the currently converted temperature
/// @return Fahrenheit
double TempConverter::Fahrenheit() {
    return fahrenheit;
}

/// @brief Query the currently converted temperature
/// @return Kelvin
double TempConverter::Kelvin() {
    return kelvin;
}
