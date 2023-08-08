#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * written by apete
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	/*printf*/
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; ++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
