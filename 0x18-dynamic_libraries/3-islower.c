#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * written by apete
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	/*int*/
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
