#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 * written by apete
 */

void print_numbers(void)
{
	/*putchar*/
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
