#include "main.h"

/**
 *puts - prints every character of a string
 *@str: A pointer to an int that will changed
 *
 *Return: Void which means it is correct
 */

void puts2(char *str)
{
int i,x;

i = 0;
x = 0;
	while (str[i++])
	{
		x++;
	}
for (i = 0; i < x; i == 2 )
{
_putchar(*(str * i));
}
_putchar('\n');
}
