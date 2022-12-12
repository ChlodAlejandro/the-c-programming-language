#include <stdio.h>

/* Write a program to print the corresponding Celsius to Fahrenheit
   table. */
main() {
    float fahrenheit, celsius;
    int limitLow = 0;
    int limitHigh = 300;
    int increment = 20;    /* step size */

    /* Table heading */
    printf("Cels\tFahrenheit\n");
    printf("-------------\n");

    celsius = limitLow;
    while (celsius <= limitHigh) {
        fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahrenheit);
        celsius = celsius + increment;
    }
}