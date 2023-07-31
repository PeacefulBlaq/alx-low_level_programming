#include <stdio.h>
#include <stddef.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 */

/*
int main()
{
	char *_memset(char *s, char b, unsigned int n) {
	for (unsigned int i = 0; i < n; i++) {
		s[i] = b;
	}
	return s;
}
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
