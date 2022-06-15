#include "main.h"

/**
 * string_toupper - a function to convert a srig to upper case
 * @s: a string to be converted
 * Return: string
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] -= 32;
		}
		a++;
	}

	return (s);
}
