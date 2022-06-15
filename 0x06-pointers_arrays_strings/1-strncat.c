#include "main.h"

/**
 * _strncat - concataination
 * @dest: destnation
 * @src: string
 * @n: limmit of concat
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
	{
		len++;
	}

	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + n +1] = '\0';

	return (dest);
}
