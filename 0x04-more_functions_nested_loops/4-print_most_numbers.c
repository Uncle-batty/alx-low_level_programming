nclude "main.h"

/**
 * print_most_numbers - prints all numbers but not 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
