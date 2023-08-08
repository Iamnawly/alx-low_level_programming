#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * written by apete
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	/*intd*/
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
		if (*s == accept[d])
		return (s);
		}
	s++;
	}

return ('\0');
}
