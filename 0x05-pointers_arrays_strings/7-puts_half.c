#include "main.h"
/**
 * puts_half - prints_half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len;

	if (str)
	
	{
		for (len = 0; *(str + len); ++len)
			;
		for (str += (len + 1) / 2; *str; ++str)
			_putchar(*str);
		_putchar('\n');
	}
}
