#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints out alphabets in a reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
