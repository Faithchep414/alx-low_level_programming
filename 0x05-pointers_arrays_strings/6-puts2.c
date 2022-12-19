#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
{
	int i;


	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
