#include "main.h"

/**
 * print_alphabet - a function to print the alphabet (in lower case)
 *
 * Return Always 0 (success)
 */
void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
