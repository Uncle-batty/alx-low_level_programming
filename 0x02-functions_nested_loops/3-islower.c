#include "main.h"

/**
 * _islower - a function to determin if a character is lowwer case
 * @c: is a signle letter
 * Return: 1 if c is lower or 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
