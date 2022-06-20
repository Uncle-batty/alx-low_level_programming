#include <stdio.h>
#include "main.h"

/**
 * _strbrk - function name 
 * @s: inputs
 * @accept: inputs
 * Return: string
 */
char *_strbrk(char *s, char *accept)
{
	int i,nn;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
