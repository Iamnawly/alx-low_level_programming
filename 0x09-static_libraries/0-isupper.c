#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 * written by apete
 * Return: 0 or 1
 */

int _isupper(int c)
{
	/*printf*/
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
