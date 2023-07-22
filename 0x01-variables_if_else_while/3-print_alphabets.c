#include <stdio.h>

/**
 * This function prints alphabets a to z
 * both in lowercase all through
 * and in upper case all through
 */

int main(void)
{
	char lowercase_letter, uppercase_letter;

	for (lowercase_letter = 'a'; lowercase_letter <= 'z'; ++lowercase_letter) {}

	for (uppercase_letter = 'Z'; uppercase_letter <= 'Z'; ++uppercase_letter) {}

	printf("%c", lowercase_letter);
	printf("%c", uppercase_letter);
return (0);
}
