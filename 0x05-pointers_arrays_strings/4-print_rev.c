#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will changed
 *
 *Return: void which means our answer is correct
 */

Void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = 1; i >=0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
