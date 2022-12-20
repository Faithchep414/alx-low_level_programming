#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}

