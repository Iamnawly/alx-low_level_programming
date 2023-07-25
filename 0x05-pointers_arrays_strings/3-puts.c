#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * written by apete
 */
void _puts(char *str)
{
	/*putchar*/
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
