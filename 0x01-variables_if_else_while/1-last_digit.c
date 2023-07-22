#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description : Assign a random number to n and then test n
 *               to see if n is positive or negative and if n is greater than 0
 *
 * Return: Always 0 (success)
 */

	int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	printf("Last digit of %d is %d ", n, r);
	if (r > 5)
	{
		printf("and is greater than 5");
	}
	if (r == 0)
	{
		printf("and is 0");
	}
	if (r < 6)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
i}
