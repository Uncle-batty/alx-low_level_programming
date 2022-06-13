#include "main.h"
#include <stdio.h>

/**
 * print_array - a function to prit an array
 * @a: array
 * @n: number of elemets to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
