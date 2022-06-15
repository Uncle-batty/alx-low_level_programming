#include "main.h"

/**
 * leet - encod a string
 * @s: string
 * Return: encoded syring
 */
char *leet(char *s)
{
	int a = 0, b = 0, lim = 5;
	char c[5] = {'A', 'E', 'O', 'T', 'L'};
	char d[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < lim)
		{
			if (s[a] == c[b] || s[a] - 32 == c[b])
			{
				s[a] = d[b];
			}

			b++;
		}
		a++;
	}

	return (s);
}
