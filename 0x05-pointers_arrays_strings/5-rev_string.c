#include "main.h"

/**
 * rev_string - a fuction to reverse a string
 * @s : string input
 * Return: string in revers
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0, i, k;

	for (i = 0; s[counter] != 0; i++)
	{
		counter++;
	}

	for (k = 0; k < counter; k++)
	{
		counter--;
		rev = s[k];
		s[k] = s[counter];
		s[counter] = rev;
	}
}
