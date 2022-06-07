#include "main.h"
/**
 * _abs - is a function to return the absolute value of an int
 * @num: a int
 * Return: absolute value
 */
int _abs(int num)
{
	return (num * ((num > 0) - (num < 0)));
}
