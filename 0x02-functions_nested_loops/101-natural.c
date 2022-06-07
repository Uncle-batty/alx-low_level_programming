#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry poit
 *
 * Return: alwasy 0
 */
int main(void)
{
	int k, sum;
	for (k = 0; k < 1024; k++)
	{
		if ((k % 3 == 0) || (k % 5 == 0))
		{
			sum += k;
		}
		else
		{
			continue;
		}
	}
	printf("%d",sum);
}
