#include "main.h"

/**
 * *_strcpy - a function to copy a string to a new pointer
 * @dest: destanation
 * @src: copy from
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; scr[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
