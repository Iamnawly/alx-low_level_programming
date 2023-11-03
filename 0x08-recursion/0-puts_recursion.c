#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * written by apete
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	/*putchar*/
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
