#include "main.h"

/**
 * puts_half - prints_half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i length;

	length = strlen(str);

	i = length % 2 ? (length - 1) / 2 : length / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	 _putchar('\n');
}
