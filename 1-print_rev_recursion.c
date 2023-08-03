#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 * wrritten by apete
 */
void _print_rev_recursion(char *s)
{
	/*printrev*/
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
