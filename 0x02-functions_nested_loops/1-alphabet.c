#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
