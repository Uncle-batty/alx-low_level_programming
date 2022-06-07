#include "main.h"
/**
 * jack_bauer - prints all minits in a day
 * Return: 24 hour clock
 */
void jack_bauer(void)
{
	int Hour, Minutes;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Minutes = 0; Minutes < 60; Minutes++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Minutes / 10) + '0');
			_putchar((Minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
