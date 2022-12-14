#include <stdio.h>

/** Write a program to count blanks, tabs, and newlines. */
main() {
    int c, blanks = 0, tabs = 0, newlines = 0;

    printf("Input string (EOF to end): ");
    while((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }

    printf("\nRESULTS\n==============\n");
    printf("Spaces:\t%d\nTabs:\t%d\nLines:\t%d\n", blanks, tabs, newlines);
}