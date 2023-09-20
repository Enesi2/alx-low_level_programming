#include <string.h>

void rev_string(char *s) {
    int length = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        /* Swap characters at positions i and j */
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}