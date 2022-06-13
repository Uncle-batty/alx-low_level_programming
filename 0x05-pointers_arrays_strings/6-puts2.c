#include "main.h"

/**
 * puts2 - prints every second  charecter
 * @str: input
 * Return: printed string
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
