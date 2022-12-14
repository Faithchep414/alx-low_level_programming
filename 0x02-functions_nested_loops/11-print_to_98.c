#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 *
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d, ", n);
		print_to_98((n < 98) ? n + 1 : n - 1);
	}
}
