#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: a-z 10 times
 */
void print_alphabet_x10(void)
{
	int ch, counter;

	counter = 0;

	while (counter < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		counter++;
		_putchar('\n');
	}
}
