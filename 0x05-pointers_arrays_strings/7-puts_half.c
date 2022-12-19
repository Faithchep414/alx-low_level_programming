#include "main.h"

/**
 * puts_half - prints_half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int len;

	while (*str != '\0')
	{
		len++;
		str++;
	}


	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}


	_putchar('\n');
}
