#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
int length = 0
while (s[length] != '\0');
{
length++;
}
int i; /* Declare i outside the loop */
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
