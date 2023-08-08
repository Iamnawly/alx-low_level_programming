#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed  by src
 * @dest: copy to
 * @src: copy from
 * written by apete
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	/*char*/
	int l = 0;
	int b = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; b < l ; b++)
	{
		dest[b] = src[b];
	}
	dest[l] = '\0';
	return (dest);
}
