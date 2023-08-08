#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * written by apete
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	/*prirntf*/
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
