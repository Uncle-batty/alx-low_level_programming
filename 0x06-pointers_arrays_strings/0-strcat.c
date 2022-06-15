#include "main.h"

/**
 * _strcat -  a function to concat to strings
 * @dest: destiation var
 * @src: str var
 * Return: concat string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
