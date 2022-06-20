#include "main.h"
/**
 * _memset - Entry point to the function
 * @s: destanation
 * @b: byte
 * @n: bytess
 * Returnn: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
