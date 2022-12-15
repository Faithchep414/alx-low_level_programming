#iclude "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;


	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}
