#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * written by apete
 * Return: n
 */
char *string_toupper(char *n)
{
	/*while*/
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
