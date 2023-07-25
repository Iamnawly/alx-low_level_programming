#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * written by apete
 * Return: length
 */
int _strlen(char *s)
{
	/*int*/
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
