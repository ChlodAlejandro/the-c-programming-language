#include <stdio.h>

/* Modify the temperature conversion program to print a heading
   above the table */
main() {
    float fahrenheit, celsius;
    int limitLow = 0;
    int limitHigh = 300;
    int increment = 20;    /* step size */

    /* Table heading */
    printf("Fahr\tCelsius\n");
    printf("-------------\n");

    fahrenheit = limitLow;
    while (fahrenheit <= limitHigh) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + increment;
    }
}