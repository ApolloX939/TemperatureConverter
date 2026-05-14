# TemperatureConverter

C++ Temperature Converter (Fahrenheit &amp; Celsius)

## Compilation

### G++

`g++ -Wall -std=c++14 -o temp main.cpp TempConvert.cpp TempConvert.h`

> Warnings: All, Standard: C++ 14

## Notes

Formulas

```
C = (F - 32) / 1.8
F = (C * 1.8) + 32
K = C + 273.15
C = K - 273.15
```

> Note: Kelvin conversion can only convert to/from Celsius (With no direct conversion to/from Fahrenheit, This project will convert to Celsius then to Kelvin)
