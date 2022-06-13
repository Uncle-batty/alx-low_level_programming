#include "main.h"

/**
 * print_rev - a function to print a string in reversce
 * counter is to get the len of the string
 * @s: str intput
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int counter = 0, i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
