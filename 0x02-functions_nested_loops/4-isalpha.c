#include "main.h"
/**
 * _isalpha - checkes if the charecter is alphabetic
 * @c: Singel letter
 * Return: 1 if its a letter , 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
