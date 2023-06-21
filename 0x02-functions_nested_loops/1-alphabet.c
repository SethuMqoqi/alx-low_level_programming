#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	int _putchar(char c);
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
