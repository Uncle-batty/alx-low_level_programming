#include "main.h"
/**
 * times_table - a function to print times table
 * Return: times table
 */
void times_table(void)
{
	int row, col, D;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			D = (row * col);
			if ((D / 10) > 0)
			{
				_putchar((D / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((D % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
