#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("The size of char is %zu bytes.\n", sizeof(char));
	printf("The size of short is %zu bytes.\n", sizeof(int));
	printf("The size of int is %zu bytes.\n", sizeof(long int));
	printf("The size of long is %zu bytes.\n", sizeof(long long int));
	printf("The size of long long is %zu bytes.\n", sizeof(float));
	return (0);
}
