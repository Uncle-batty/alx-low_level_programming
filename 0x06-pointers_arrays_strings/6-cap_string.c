#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitilize
 * @s: string
 * Return: string upper
 */
char *cap_string(char *s)
{
	int j = 0, i;
	int spc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[j])
	{
		i = 0;

		while (i < spc)
		{
			if ((j == 0 || s[j - 1] == spc[i]) && (s[j] >= 97 && s[j] <= 122))
			{
				s[j] -= 32;
			}
			i++
		}
		a++
	}

	return (s);
}
