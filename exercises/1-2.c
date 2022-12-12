#include <stdio.h>

/* Experiment to fin out what happens if printf's argument string
   contains \c; where c is some character not listed above. */
main() {
    printf("hello,\kworld!"); /* hello,kworld! */
}