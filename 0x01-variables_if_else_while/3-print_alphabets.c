#include <stdio.h>

/**
 *
 * main - entry point
 *
 * Description: Print lower and upper alphabet on the same line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch++)
		putchar(ch);

	for (ch = 'A'; ch<= 'Z'; ch++)
		putchar (ch);

	putchar('\n');

	return (0);
}
