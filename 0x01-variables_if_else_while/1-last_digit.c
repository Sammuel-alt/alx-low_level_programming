#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("last digit of %d is %d and is greaterthan 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d and is 0\n", n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, n % 10);
	

	return (0);

}
