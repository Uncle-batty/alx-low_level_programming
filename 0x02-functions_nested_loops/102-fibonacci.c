#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int k, num1, num2, fib;

	num1 = 1;
	num2 = 1;
	printf("%d, ", num2);
	for (k = 0; k < 48; k++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%d", fib);
		if (k < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
