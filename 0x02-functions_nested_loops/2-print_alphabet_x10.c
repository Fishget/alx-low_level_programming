#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
  */

void print_alphabet_10x(void)
{
int i;
char c;

for (i = 0; i < 10 ; i++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		 _putchar(c);
	}
	_putchar('\n');
}
}

