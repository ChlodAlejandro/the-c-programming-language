#include <stdio.h>

/** Verify that the expression `getchar() != EOF` is 0 or 1. */
main() {
    int c;

    printf("Program start.\n");
    while (c = getchar() != EOF)
        printf("getchar() is %d\n", c);
    printf("getchar() is %d\n", c);
    printf("Program end.\n");
}