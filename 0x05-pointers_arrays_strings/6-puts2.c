#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0')
			i++;
	}

	_putchar('\n');
}
