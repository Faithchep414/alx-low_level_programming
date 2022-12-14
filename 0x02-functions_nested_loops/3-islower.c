#include "main.h"

/**
 * _is lower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if the letter is lowercase, 0 if not
 */
int _is lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
