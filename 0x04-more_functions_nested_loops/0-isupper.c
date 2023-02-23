#include "main.h"

/**
 * _isupper - Checks if the character is an upper case.
 *
 * @c: checks the upper case character.
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
