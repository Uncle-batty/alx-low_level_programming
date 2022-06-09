#include "main.h"

/**
 * _isdigit - checks if the var is a digit
 * @c: var
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
