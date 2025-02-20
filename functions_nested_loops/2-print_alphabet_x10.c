#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;
	char lit;

	for (i = 0 ; i < 10 ; i++)
	{
		for (lit = 'a' ; lit <= 'z' ; lit++)
			_putchar(lit);
		_putchar('\n');
	}
}
