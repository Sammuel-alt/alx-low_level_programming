#include "main.h"

/**
 * _isdigit - Checks for numbers 0 - 9
 *
 * @c: Checks the number
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
