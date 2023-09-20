#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str) {
    int length = 0;
    int i;
    int start_index;

    /* Calculate the length of the string */
    while (str[length] != '\0') {
        length++;
    }

    /* Calculate the starting index for the second half */
    start_index = (length + 1) / 2;

    /* Print the second half of the string */
    for (i = start_index; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    putchar('\n');
}
