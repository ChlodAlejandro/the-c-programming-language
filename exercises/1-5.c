#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Modify the temperature conversion program to print the table in
   reverse order, that is, from 300 to 0. */
main() {
    float fahrenheit, celsius;

    /* Table heading */
    printf("Fahr\tCelsius\n");
    printf("-------------\n");

    for (fahrenheit = UPPER; fahrenheit > LOWER; fahrenheit = fahrenheit - STEP) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
    }
}