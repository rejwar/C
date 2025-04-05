/*
File Name: TemperatureConverter.c
Purpose: Convert Celsius to Fahrenheit.
*/

#include <stdio.h>

int main() {
    float celsius = 25.0, fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
