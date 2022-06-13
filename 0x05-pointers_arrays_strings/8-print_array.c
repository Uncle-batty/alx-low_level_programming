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
	for (int i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
