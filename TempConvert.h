#ifndef TEMPCONV_H
#define TEMPCONV_H

/// @brief A Class to convert between the 3 temperature units
class TempConverter {
    private:
        double celsius, fahrenheit, kelvin;
    public:
        TempConverter();
        
        TempConverter& Fahrenheit(double);
        TempConverter& Celsius(double);
        TempConverter& Kelvin(double);

        double Fahrenheit();
        double Celsius();
        double Kelvin();
};

#endif