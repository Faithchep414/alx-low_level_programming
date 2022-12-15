#include "main.h"

/**
 * _is lower - checks if a character is lowercase
 * @c: The character to check
 * Return: 1 if the letter is lowercase, 0 if not
 */
int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
