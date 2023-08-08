#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * written by apete
 * Return: 0
 */
char *_strdup(char *str)
{
	/*int b*/
	char *bbb;
	int b, r = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	bbb = malloc(sizeof(char) * (b + 1));

	if (bbb == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bbb[r] = str[r];

	return (bbb);
}
