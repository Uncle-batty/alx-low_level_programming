#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dore Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dore Korpar, 2015-10-19"));
	return (1);
}
