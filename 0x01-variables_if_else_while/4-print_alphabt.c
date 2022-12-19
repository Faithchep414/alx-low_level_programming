#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return:Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
		_putchar('c');
	}


	_putchar('\n');

	return (0);
}
