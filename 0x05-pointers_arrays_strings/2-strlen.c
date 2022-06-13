#include "main.h"

/**
 * _strlen - a function  to return lenght of a string
 * @s: string input
 * Return: length of string
 */
int _strlen(char *s)
{
	int loop = 1, counter = 0;
	char c = s[0];

	while (c != '\0')
	{
		counter++;
		c = s[loop++];
	}
	return (counter);
}
