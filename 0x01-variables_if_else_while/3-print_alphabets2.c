#include <stdio.h>

/**
 * C programme to print all alphabets in both
 * upper and lower case
 */

int main(void)
{
	char  i;

	for(i = 'A'; i <= 'Z'; ++i);
	printf("%c", i);

	for(i = 'a'; i <='z'; ++i);
	printf("%c", i);

	return (0);
}
