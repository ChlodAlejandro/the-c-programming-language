#include <stdio.h>

/** Write a program to copy its input to its output, replacing
    each string of one or more blanks by a single blank. */
main() {
    int c1, c2;

    printf("Input string (EOF to end): ");
    while ((c1 = getchar()) != EOF) {
        if (c2 == ' ') {
            /* OR operator (||) not yet discussed. */
            if (c1 != ' ') {
                putchar(c1);
            }
        } else {
            putchar(c1);
        }
        c2 = c1;
    }

}