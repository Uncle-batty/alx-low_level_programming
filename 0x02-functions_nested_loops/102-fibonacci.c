#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int k;
	long num1, num2, fib;

	num1 = 1;
	num2 = 1;
	printf("%ld, ", num2);
	for (k = 0; k < 49; k++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%ld", fib);
		if (k < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
