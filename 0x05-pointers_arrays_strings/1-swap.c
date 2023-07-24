#include "main.h"

/**
 * This function writes a function that swaps the values of two integers.
 * I hope this works fine anyways
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
